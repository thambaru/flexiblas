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



static TLS_STORE uint8_t hook_pos_sspgvd = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(sspgvd,SSPGVD)(blasint* itype, char* jobz, char* uplo, blasint* n, float* ap, float* bp, float* w, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info)
#else
void FC_GLOBAL(sspgvd,SSPGVD)(blasint* itype, char* jobz, char* uplo, blasint* n, float* ap, float* bp, float* w, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info)
#endif
{
	void (*fn) (void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.sspgvd.f77_blas_function; 
	fn_hook = __flexiblas_hooks->sspgvd.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) itype, (void*) jobz, (void*) uplo, (void*) n, (void*) ap, (void*) bp, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info); 
		return;
	} else {
		hook_pos_sspgvd = 0;
		fn_hook((void*) itype, (void*) jobz, (void*) uplo, (void*) n, (void*) ap, (void*) bp, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void sspgvd_(blasint* itype, char* jobz, char* uplo, blasint* n, float* ap, float* bp, float* w, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sspgvd,SSPGVD)))));
#else
void sspgvd(blasint* itype, char* jobz, char* uplo, blasint* n, float* ap, float* bp, float* w, float* z, blasint* ldz, float* work, blasint* lwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(sspgvd,SSPGVD)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_sspgvd_(void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info);

	fn = current_backend->lapack.sspgvd.f77_blas_function; 

		fn((void*) itype, (void*) jobz, (void*) uplo, (void*) n, (void*) ap, (void*) bp, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info); 

	return;
}

void flexiblas_real_sspgvd(void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_real_sspgvd_")));





/* Chainloader for Hooks */


void flexiblas_chain_sspgvd_(void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info);

	fn      = current_backend->lapack.sspgvd.f77_blas_function; 

    hook_pos_sspgvd ++;
    if( hook_pos_sspgvd < __flexiblas_hooks->sspgvd.nhook) {
        fn_hook = __flexiblas_hooks->sspgvd.f77_hook_function[hook_pos_sspgvd];
        fn_hook((void*) itype, (void*) jobz, (void*) uplo, (void*) n, (void*) ap, (void*) bp, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info);
    } else {
        hook_pos_sspgvd = 0;
		fn((void*) itype, (void*) jobz, (void*) uplo, (void*) n, (void*) ap, (void*) bp, (void*) w, (void*) z, (void*) ldz, (void*) work, (void*) lwork, (void*) iwork, (void*) liwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_sspgvd(void* itype, void* jobz, void* uplo, void* n, void* ap, void* bp, void* w, void* z, void* ldz, void* work, void* lwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_chain_sspgvd_")));




