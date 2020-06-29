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
 /* Generated: Wed Mar 28 11:20:04 2018 */
        
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



static TLS_STORE uint8_t hook_pos_dorglq = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dorglq,DORGLQ)(blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(dorglq,DORGLQ)(blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dorglq.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dorglq.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_dorglq = 0;
		fn_hook((void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dorglq_(blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dorglq,DORGLQ)))));
#else
void dorglq(blasint* m, blasint* n, blasint* k, double* a, blasint* lda, double* tau, double* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dorglq,DORGLQ)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dorglq_(void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info);

	fn = current_backend->lapack.dorglq.f77_blas_function; 

		fn((void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) work, (void*) lwork, (void*) info); 

	return;
}

void flexiblas_real_dorglq(void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_real_dorglq_")));





/* Chainloader for Hooks */


void flexiblas_chain_dorglq_(void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info)
{
	void (*fn) (void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info);
	void (*fn_hook) (void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info);

	fn      = current_backend->lapack.dorglq.f77_blas_function; 

    hook_pos_dorglq ++;
    if( hook_pos_dorglq < __flexiblas_hooks->dorglq.nhook) {
        fn_hook = __flexiblas_hooks->dorglq.f77_hook_function[hook_pos_dorglq];
        fn_hook((void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_dorglq = 0;
		fn((void*) m, (void*) n, (void*) k, (void*) a, (void*) lda, (void*) tau, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_dorglq(void* m, void* n, void* k, void* a, void* lda, void* tau, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_chain_dorglq_")));




