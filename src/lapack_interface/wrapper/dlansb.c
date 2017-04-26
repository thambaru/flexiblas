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
 * Copyright (C) Martin Koehler, 2015-2017
 */
 /* This file it automatically generated. Please do not edit. */
 /* Generated: Tue Mar 28 16:07:34 2017 */ 
        
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



#ifdef FLEXIBLAS_ABI_INTEL 
double FC_GLOBAL(dlansb,DLANSB)(char* norm, char* uplo, blasint* n, blasint* k, double* ab, blasint* ldab, double* work)
#else
double FC_GLOBAL(dlansb,DLANSB)(char* norm, char* uplo, blasint* n, blasint* k, double* ab, blasint* ldab, double* work)
#endif 
{
    double ts;
	double (*fn) (void* norm, void* uplo, void* n, void* k, void* ab, void* ldab, void* work);
	double ret;
	if ( current_backend->post_init != 0 ) {
		__flexiblas_backend_init(current_backend); 
		current_backend->post_init = 0; 
	}
	fn = current_backend->lapack.dlansb.call_fblas; 
	if ( __flexiblas_profile ) {
		ts = flexiblas_wtime(); 
		ret = fn((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work); 
		current_backend->lapack.dlansb.timings[0] += (flexiblas_wtime() -ts);
		current_backend->lapack.dlansb.calls[0]++;
	} else { 
		ret = fn((void*) norm, (void*) uplo, (void*) n, (void*) k, (void*) ab, (void*) ldab, (void*) work); 
	} 
	return ret; 
}
#ifdef FLEXIBLAS_ABI_IBM
double dlansb_(char* norm, char* uplo, blasint* n, blasint* k, double* ab, blasint* ldab, double* work) __attribute__((alias(MTS(FC_GLOBAL(dlansb,DLANSB)))));
#else
double dlansb(char* norm, char* uplo, blasint* n, blasint* k, double* ab, blasint* ldab, double* work) __attribute__((alias(MTS(FC_GLOBAL(dlansb,DLANSB)))));
#endif


