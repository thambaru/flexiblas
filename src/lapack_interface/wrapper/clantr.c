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
 /* Generated: Wed Mar 28 11:20:03 2018 */
        
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



static TLS_STORE uint8_t hook_pos_clantr = 0;
#ifdef FLEXIBLAS_ABI_INTEL
float FC_GLOBAL(clantr,CLANTR)(char* norm, char* uplo, char* diag, blasint* m, blasint* n, float complex* a, blasint* lda, float* work)
#else
float FC_GLOBAL(clantr,CLANTR)(char* norm, char* uplo, char* diag, blasint* m, blasint* n, float complex* a, blasint* lda, float* work)
#endif
{
	float (*fn) (void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work);
	float (*fn_hook) (void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work);
	float ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.clantr.f77_blas_function; 
	fn_hook = __flexiblas_hooks->clantr.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) norm, (void*) uplo, (void*) diag, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) work); 
		return ret; 
	} else {
		hook_pos_clantr = 0;
		ret=fn_hook((void*) norm, (void*) uplo, (void*) diag, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) work);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
float clantr_(char* norm, char* uplo, char* diag, blasint* m, blasint* n, float complex* a, blasint* lda, float* work) __attribute__((alias(MTS(FC_GLOBAL(clantr,CLANTR)))));
#else
float clantr(char* norm, char* uplo, char* diag, blasint* m, blasint* n, float complex* a, blasint* lda, float* work) __attribute__((alias(MTS(FC_GLOBAL(clantr,CLANTR)))));
#endif




/* Real Implementation for Hooks */


float flexiblas_real_clantr_(void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work)
{
	float (*fn) (void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work);
	float ret;

	fn = current_backend->lapack.clantr.f77_blas_function; 

		ret = fn((void*) norm, (void*) uplo, (void*) diag, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) work); 

	return ret ;
}

float flexiblas_real_clantr(void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work)  __attribute__((alias("flexiblas_real_clantr_")));





/* Chainloader for Hooks */


float flexiblas_chain_clantr_(void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work)
{
	float (*fn) (void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work);
	float (*fn_hook) (void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work);
	float ret;

	fn      = current_backend->lapack.clantr.f77_blas_function; 

    hook_pos_clantr ++;
    if( hook_pos_clantr < __flexiblas_hooks->clantr.nhook) {
        fn_hook = __flexiblas_hooks->clantr.f77_hook_function[hook_pos_clantr];
        ret = fn_hook((void*) norm, (void*) uplo, (void*) diag, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) work);
    } else {
        hook_pos_clantr = 0;
		ret = fn((void*) norm, (void*) uplo, (void*) diag, (void*) m, (void*) n, (void*) a, (void*) lda, (void*) work); 
	}
	return ret ;
}

float flexiblas_chain_clantr(void* norm, void* uplo, void* diag, void* m, void* n, void* a, void* lda, void* work)  __attribute__((alias("flexiblas_chain_clantr_")));




