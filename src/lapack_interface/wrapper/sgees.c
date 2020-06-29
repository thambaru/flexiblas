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



static TLS_STORE uint8_t hook_pos_sgees = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(sgees,SGEES)(char* jobvs, char* sort, blasint* selectfunc, blasint* n, float* a, blasint* lda, blasint* sdim, float* wr, float* wi, float* vs, blasint* ldvs, float* work, blasint* lwork, blasint* bwork, blasint* info)
#else
void FC_GLOBAL(sgees,SGEES)(char* jobvs, char* sort, blasint* selectfunc, blasint* n, float* a, blasint* lda, blasint* sdim, float* wr, float* wi, float* vs, blasint* ldvs, float* work, blasint* lwork, blasint* bwork, blasint* info)
#endif
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info);
	void (*fn_hook) (void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.sgees.f77_blas_function; 
	fn_hook = __flexiblas_hooks->sgees.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) wr, (void*) wi, (void*) vs, (void*) ldvs, (void*) work, (void*) lwork, (void*) bwork, (void*) info); 
		return;
	} else {
		hook_pos_sgees = 0;
		fn_hook((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) wr, (void*) wi, (void*) vs, (void*) ldvs, (void*) work, (void*) lwork, (void*) bwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void sgees_(char* jobvs, char* sort, blasint* selectfunc, blasint* n, float* a, blasint* lda, blasint* sdim, float* wr, float* wi, float* vs, blasint* ldvs, float* work, blasint* lwork, blasint* bwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sgees,SGEES)))));
#else
void sgees(char* jobvs, char* sort, blasint* selectfunc, blasint* n, float* a, blasint* lda, blasint* sdim, float* wr, float* wi, float* vs, blasint* ldvs, float* work, blasint* lwork, blasint* bwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sgees,SGEES)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_sgees_(void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info)
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info);

	fn = current_backend->lapack.sgees.f77_blas_function; 

		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) wr, (void*) wi, (void*) vs, (void*) ldvs, (void*) work, (void*) lwork, (void*) bwork, (void*) info); 

	return;
}

void flexiblas_real_sgees(void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info)  __attribute__((alias("flexiblas_real_sgees_")));





/* Chainloader for Hooks */


void flexiblas_chain_sgees_(void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info)
{
	void (*fn) (void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info);
	void (*fn_hook) (void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info);

	fn      = current_backend->lapack.sgees.f77_blas_function; 

    hook_pos_sgees ++;
    if( hook_pos_sgees < __flexiblas_hooks->sgees.nhook) {
        fn_hook = __flexiblas_hooks->sgees.f77_hook_function[hook_pos_sgees];
        fn_hook((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) wr, (void*) wi, (void*) vs, (void*) ldvs, (void*) work, (void*) lwork, (void*) bwork, (void*) info);
    } else {
        hook_pos_sgees = 0;
		fn((void*) jobvs, (void*) sort, (void*) selectfunc, (void*) n, (void*) a, (void*) lda, (void*) sdim, (void*) wr, (void*) wi, (void*) vs, (void*) ldvs, (void*) work, (void*) lwork, (void*) bwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_sgees(void* jobvs, void* sort, void* selectfunc, void* n, void* a, void* lda, void* sdim, void* wr, void* wi, void* vs, void* ldvs, void* work, void* lwork, void* bwork, void* info)  __attribute__((alias("flexiblas_chain_sgees_")));




