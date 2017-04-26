/* $Id: hooks.h 3741 2013-10-01 12:54:54Z komart $ */
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
#include "../hooks.h"
#include "../extblas.h"

void cblas_dimatcopy(const enum CBLAS_ORDER CORDER, const enum CBLAS_TRANSPOSE CTRANS, 
		     const int crows, const int ccols, const double calpha, double *a, const int clda, 
		     const int cldb)
{
#ifdef F77_INT
   F77_INT F77_ROWS=crows; 
   F77_INT F77_COLS=ccols; 
   F77_INT F77_LDA =clda; 
   F77_INT F77_LDB =cldb; 
#else 
   #define F77_ROWS crows 
   #define F77_COLS ccols 
   #define F77_LDA  clda 
   #define F77_LDB  cldb 
#endif
   if ( flexiblas_dimatcopy.call_cblas != NULL ) {
	   float te = 0, ts = 0;
	   if ( __flexiblas_profile ) {
		   ts = flexiblas_wtime(); 
	   }
	   void (*fn)(const enum CBLAS_ORDER, const enum CBLAS_TRANSPOSE, const int, const int, const double, double *, const int, const int) = flexiblas_dimatcopy.call_cblas;
	   fn(CORDER, CTRANS, crows, ccols, calpha, a, clda, cldb);  
	   if ( __flexiblas_profile ){
		   te = flexiblas_wtime(); 
		   flexiblas_time_dimatcopy[POS_CBLAS] += (te - ts); 
	   }
   } else {
	char ORDER[2]=" ";
	char TRANS[2]=" "; 
	switch(CORDER){
		case CblasColMajor:
			ORDER[0]='C';
			break; 
		case CblasRowMajor:
			ORDER[0]='R'; 
			break; 
		default: 
			ORDER[0]='X'; 
	}
	switch(CTRANS){
		case CblasNoTrans:
		case CblasConjNoTrans:
			TRANS[0]='N'; 
			break; 
		case CblasTrans:
		case CblasConjTrans:
			TRANS[0]='T';
			break; 
		default: 
			TRANS[0]='X'; 
	}
   	F77_dimatcopy( ORDER, TRANS, &F77_ROWS, &F77_COLS, &calpha, a, &F77_LDA, &F77_LDB);
   }
   flexiblas_call_dimatcopy[POS_CBLAS] ++;
} 

