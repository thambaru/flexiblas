/* $Id: flexiblas.h 3741 2013-10-01 12:54:54Z komart $ */
/*
   Copyright (C) 2013  Martin Köhler, koehlerm@mpi-magdeburg.mpg.de

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */
#include "cblas.h"
#include "cblas_f77.h"
#include "../flexiblas.h"


void cblas_cgeru(const CBLAS_LAYOUT layout, const int M, const int N,
        const void *alpha, const void *X, const int incX,
        const void *Y, const int incY, void *A, const int lda)
{
#ifdef F77_INT
    F77_INT F77_M=M, F77_N=N, F77_lda=lda, F77_incX=incX, F77_incY=incY;
#else
#define F77_M M
#define F77_N N
#define F77_incX incX
#define F77_incY incY
#define F77_lda lda
#endif

    current_backend->blas.cgeru.calls[POS_CBLAS] ++;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
    if ( current_backend->blas.cgeru.call_cblas != NULL ) {
        void (*fn)
            (const CBLAS_LAYOUT layout, const int M, const int N,
             const void *alpha, const void *X, const int incX,
             const void *Y, const int incY, void *A, const int lda)
            = current_backend->blas.cgeru.call_cblas;
        fn(layout,M,N,alpha,X,incX,Y,incY,A,lda);
    } else {
        extern int CBLAS_CallFromC;
        extern int RowMajorStrg;
        RowMajorStrg = 0;

        CBLAS_CallFromC = 1;

        if (layout == CblasColMajor)
        {
            FC_GLOBAL(cgeru,CGERU)( &F77_M, &F77_N, alpha, X, &F77_incX, Y, &F77_incY, A,
                    &F77_lda);
        }
        else if (layout == CblasRowMajor)
        {
            RowMajorStrg = 1;
            FC_GLOBAL(cgeru,CGERU)( &F77_N, &F77_M, alpha, Y, &F77_incY, X, &F77_incX, A,
                    &F77_lda);
        }
        else cblas_xerbla(1, "cblas_cgeru","Illegal layout setting, %d\n", layout);
        CBLAS_CallFromC = 0;
        RowMajorStrg = 0;


    }
    return;
}
