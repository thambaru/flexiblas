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



static TLS_STORE uint8_t hook_pos_dlagtm = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlagtm,DLAGTM)(char* trans, blasint* n, blasint* nrhs, double* alpha, double* dl, double* d, double* du, double* x, blasint* ldx, double* beta, double* b, blasint* ldb)
#else
void FC_GLOBAL(dlagtm,DLAGTM)(char* trans, blasint* n, blasint* nrhs, double* alpha, double* dl, double* d, double* du, double* x, blasint* ldx, double* beta, double* b, blasint* ldb)
#endif
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlagtm.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlagtm.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 
		return;
	} else {
		hook_pos_dlagtm = 0;
		fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlagtm_(char* trans, blasint* n, blasint* nrhs, double* alpha, double* dl, double* d, double* du, double* x, blasint* ldx, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dlagtm,DLAGTM)))));
#else
void dlagtm(char* trans, blasint* n, blasint* nrhs, double* alpha, double* dl, double* d, double* du, double* x, blasint* ldx, double* beta, double* b, blasint* ldb) __attribute__((alias(MTS(FC_GLOBAL(dlagtm,DLAGTM)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlagtm_(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

	fn = current_backend->lapack.dlagtm.f77_blas_function; 

		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 

	return;
}

void flexiblas_real_dlagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)  __attribute__((alias("flexiblas_real_dlagtm_")));





/* Chainloader for Hooks */


void flexiblas_chain_dlagtm_(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)
{
	void (*fn) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);
	void (*fn_hook) (void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb);

	fn      = current_backend->lapack.dlagtm.f77_blas_function; 

    hook_pos_dlagtm ++;
    if( hook_pos_dlagtm < __flexiblas_hooks->dlagtm.nhook) {
        fn_hook = __flexiblas_hooks->dlagtm.f77_hook_function[hook_pos_dlagtm];
        fn_hook((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb);
    } else {
        hook_pos_dlagtm = 0;
		fn((void*) trans, (void*) n, (void*) nrhs, (void*) alpha, (void*) dl, (void*) d, (void*) du, (void*) x, (void*) ldx, (void*) beta, (void*) b, (void*) ldb); 
	}
	return;
}

void flexiblas_chain_dlagtm(void* trans, void* n, void* nrhs, void* alpha, void* dl, void* d, void* du, void* x, void* ldx, void* beta, void* b, void* ldb)  __attribute__((alias("flexiblas_chain_dlagtm_")));




