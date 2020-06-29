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



static TLS_STORE uint8_t hook_pos_ztbtrs = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ztbtrs,ZTBTRS)(char* uplo, char* trans, char* diag, blasint* n, blasint* kd, blasint* nrhs, double complex* ab, blasint* ldab, double complex* b, blasint* ldb, blasint* info)
#else
void FC_GLOBAL(ztbtrs,ZTBTRS)(char* uplo, char* trans, char* diag, blasint* n, blasint* kd, blasint* nrhs, double complex* ab, blasint* ldab, double complex* b, blasint* ldb, blasint* info)
#endif
{
	void (*fn) (void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info);
	void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.ztbtrs.f77_blas_function; 
	fn_hook = __flexiblas_hooks->ztbtrs.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) kd, (void*) nrhs, (void*) ab, (void*) ldab, (void*) b, (void*) ldb, (void*) info); 
		return;
	} else {
		hook_pos_ztbtrs = 0;
		fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) kd, (void*) nrhs, (void*) ab, (void*) ldab, (void*) b, (void*) ldb, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ztbtrs_(char* uplo, char* trans, char* diag, blasint* n, blasint* kd, blasint* nrhs, double complex* ab, blasint* ldab, double complex* b, blasint* ldb, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztbtrs,ZTBTRS)))));
#else
void ztbtrs(char* uplo, char* trans, char* diag, blasint* n, blasint* kd, blasint* nrhs, double complex* ab, blasint* ldab, double complex* b, blasint* ldb, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztbtrs,ZTBTRS)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ztbtrs_(void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info)
{
	void (*fn) (void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info);

	fn = current_backend->lapack.ztbtrs.f77_blas_function; 

		fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) kd, (void*) nrhs, (void*) ab, (void*) ldab, (void*) b, (void*) ldb, (void*) info); 

	return;
}

void flexiblas_real_ztbtrs(void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info)  __attribute__((alias("flexiblas_real_ztbtrs_")));





/* Chainloader for Hooks */


void flexiblas_chain_ztbtrs_(void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info)
{
	void (*fn) (void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info);
	void (*fn_hook) (void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info);

	fn      = current_backend->lapack.ztbtrs.f77_blas_function; 

    hook_pos_ztbtrs ++;
    if( hook_pos_ztbtrs < __flexiblas_hooks->ztbtrs.nhook) {
        fn_hook = __flexiblas_hooks->ztbtrs.f77_hook_function[hook_pos_ztbtrs];
        fn_hook((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) kd, (void*) nrhs, (void*) ab, (void*) ldab, (void*) b, (void*) ldb, (void*) info);
    } else {
        hook_pos_ztbtrs = 0;
		fn((void*) uplo, (void*) trans, (void*) diag, (void*) n, (void*) kd, (void*) nrhs, (void*) ab, (void*) ldab, (void*) b, (void*) ldb, (void*) info); 
	}
	return;
}

void flexiblas_chain_ztbtrs(void* uplo, void* trans, void* diag, void* n, void* kd, void* nrhs, void* ab, void* ldab, void* b, void* ldb, void* info)  __attribute__((alias("flexiblas_chain_ztbtrs_")));




