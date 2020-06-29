/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright (C) Martin Koehler, 2013-2020
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Wed Mar 28 11:20:05 2018 */
        
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <complex.h>

#include "fortran_mangle.h"

#include "flexiblas.h"


#ifdef INTEGER8
#define blasint int64_t
#else
#define blasint int
#endif



static TLS_STORE uint8_t hook_pos_zspmv = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zspmv,ZSPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy)
#else
void FC_GLOBAL(zspmv,ZSPMV)(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy)
#endif
{
	void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
	void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zspmv.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zspmv.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy); 
		return;
	} else {
		hook_pos_zspmv = 0;
		fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zspmv_(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zspmv,ZSPMV)))));
#else
void zspmv(char* uplo, blasint* n, double complex* alpha, double complex* ap, double complex* x, blasint* incx, double complex* beta, double complex* y, blasint* incy) __attribute__((alias(MTS(FC_GLOBAL(zspmv,ZSPMV)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy)
{
	void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);

	fn = current_backend->lapack.zspmv.f77_blas_function; 

		fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy); 

	return;
}

void flexiblas_real_zspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy)  __attribute__((alias("flexiblas_real_zspmv_")));





/* Chainloader for Hooks */


void flexiblas_chain_zspmv_(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy)
{
	void (*fn) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);
	void (*fn_hook) (void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy);

	fn      = current_backend->lapack.zspmv.f77_blas_function; 

    hook_pos_zspmv ++;
    if( hook_pos_zspmv < __flexiblas_hooks->zspmv.nhook) {
        fn_hook = __flexiblas_hooks->zspmv.f77_hook_function[hook_pos_zspmv];
        fn_hook((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy);
    } else {
        hook_pos_zspmv = 0;
		fn((void*) uplo, (void*) n, (void*) alpha, (void*) ap, (void*) x, (void*) incx, (void*) beta, (void*) y, (void*) incy); 
	}
	return;
}

void flexiblas_chain_zspmv(void* uplo, void* n, void* alpha, void* ap, void* x, void* incx, void* beta, void* y, void* incy)  __attribute__((alias("flexiblas_chain_zspmv_")));




