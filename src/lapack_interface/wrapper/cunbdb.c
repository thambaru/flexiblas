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



static TLS_STORE uint8_t hook_pos_cunbdb = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(cunbdb,CUNBDB)(char* trans, char* signs, blasint* m, blasint* p, blasint* q, float complex* x11, blasint* ldx11, float complex* x12, blasint* ldx12, float complex* x21, blasint* ldx21, float complex* x22, blasint* ldx22, float* theta, float* phi, float complex* taup1, float complex* taup2, float complex* tauq1, float complex* tauq2, float complex* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL(cunbdb,CUNBDB)(char* trans, char* signs, blasint* m, blasint* p, blasint* q, float complex* x11, blasint* ldx11, float complex* x12, blasint* ldx12, float complex* x21, blasint* ldx21, float complex* x22, blasint* ldx22, float* theta, float* phi, float complex* taup1, float complex* taup2, float complex* tauq1, float complex* tauq2, float complex* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info);
	void (*fn_hook) (void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.cunbdb.f77_blas_function; 
	fn_hook = __flexiblas_hooks->cunbdb.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) trans, (void*) signs, (void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x12, (void*) ldx12, (void*) x21, (void*) ldx21, (void*) x22, (void*) ldx22, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) tauq2, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_cunbdb = 0;
		fn_hook((void*) trans, (void*) signs, (void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x12, (void*) ldx12, (void*) x21, (void*) ldx21, (void*) x22, (void*) ldx22, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) tauq2, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void cunbdb_(char* trans, char* signs, blasint* m, blasint* p, blasint* q, float complex* x11, blasint* ldx11, float complex* x12, blasint* ldx12, float complex* x21, blasint* ldx21, float complex* x22, blasint* ldx22, float* theta, float* phi, float complex* taup1, float complex* taup2, float complex* tauq1, float complex* tauq2, float complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cunbdb,CUNBDB)))));
#else
void cunbdb(char* trans, char* signs, blasint* m, blasint* p, blasint* q, float complex* x11, blasint* ldx11, float complex* x12, blasint* ldx12, float complex* x21, blasint* ldx21, float complex* x22, blasint* ldx22, float* theta, float* phi, float complex* taup1, float complex* taup2, float complex* tauq1, float complex* tauq2, float complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cunbdb,CUNBDB)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_cunbdb_(void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info)
{
	void (*fn) (void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info);

	fn = current_backend->lapack.cunbdb.f77_blas_function; 

		fn((void*) trans, (void*) signs, (void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x12, (void*) ldx12, (void*) x21, (void*) ldx21, (void*) x22, (void*) ldx22, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) tauq2, (void*) work, (void*) lwork, (void*) info); 

	return;
}

void flexiblas_real_cunbdb(void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_real_cunbdb_")));





/* Chainloader for Hooks */


void flexiblas_chain_cunbdb_(void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info)
{
	void (*fn) (void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info);
	void (*fn_hook) (void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info);

	fn      = current_backend->lapack.cunbdb.f77_blas_function; 

    hook_pos_cunbdb ++;
    if( hook_pos_cunbdb < __flexiblas_hooks->cunbdb.nhook) {
        fn_hook = __flexiblas_hooks->cunbdb.f77_hook_function[hook_pos_cunbdb];
        fn_hook((void*) trans, (void*) signs, (void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x12, (void*) ldx12, (void*) x21, (void*) ldx21, (void*) x22, (void*) ldx22, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) tauq2, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_cunbdb = 0;
		fn((void*) trans, (void*) signs, (void*) m, (void*) p, (void*) q, (void*) x11, (void*) ldx11, (void*) x12, (void*) ldx12, (void*) x21, (void*) ldx21, (void*) x22, (void*) ldx22, (void*) theta, (void*) phi, (void*) taup1, (void*) taup2, (void*) tauq1, (void*) tauq2, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_cunbdb(void* trans, void* signs, void* m, void* p, void* q, void* x11, void* ldx11, void* x12, void* ldx12, void* x21, void* ldx21, void* x22, void* ldx22, void* theta, void* phi, void* taup1, void* taup2, void* tauq1, void* tauq2, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_chain_cunbdb_")));




