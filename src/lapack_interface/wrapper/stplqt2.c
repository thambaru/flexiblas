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
 /* Generated: Tue Mar 28 16:07:37 2017 */ 
        
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
void FC_GLOBAL(stplqt2,STPLQT2)(blasint* m, blasint* n, blasint* l, float* a, blasint* lda, float* b, blasint* ldb, float* t, blasint* ldt, blasint* info)
#else
void FC_GLOBAL(stplqt2,STPLQT2)(blasint* m, blasint* n, blasint* l, float* a, blasint* lda, float* b, blasint* ldb, float* t, blasint* ldt, blasint* info)
#endif 
{
    double ts;
	void (*fn) (void* m, void* n, void* l, void* a, void* lda, void* b, void* ldb, void* t, void* ldt, void* info);
	if ( current_backend->post_init != 0 ) {
		__flexiblas_backend_init(current_backend); 
		current_backend->post_init = 0; 
	}
	fn = current_backend->lapack.stplqt2.call_fblas; 
	if ( __flexiblas_profile ) {
		ts = flexiblas_wtime(); 
		fn((void*) m, (void*) n, (void*) l, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) t, (void*) ldt, (void*) info); 
		current_backend->lapack.stplqt2.timings[0] += (flexiblas_wtime() -ts);
		current_backend->lapack.stplqt2.calls[0]++;
	} else { 
		fn((void*) m, (void*) n, (void*) l, (void*) a, (void*) lda, (void*) b, (void*) ldb, (void*) t, (void*) ldt, (void*) info); 
	} 
	return;
}
#ifdef FLEXIBLAS_ABI_IBM
void stplqt2_(blasint* m, blasint* n, blasint* l, float* a, blasint* lda, float* b, blasint* ldb, float* t, blasint* ldt, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(stplqt2,STPLQT2)))));
#else
void stplqt2(blasint* m, blasint* n, blasint* l, float* a, blasint* lda, float* b, blasint* ldb, float* t, blasint* ldt, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(stplqt2,STPLQT2)))));
#endif


