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



static TLS_STORE uint8_t hook_pos_chetrd_hb2st = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL_(chetrd_hb2st,CHETRD_HB2ST)(char* stage1, char* vect, char* uplo, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float* d, float* e, float complex* hous, blasint* lhous, float complex* work, blasint* lwork, blasint* info)
#else
void FC_GLOBAL_(chetrd_hb2st,CHETRD_HB2ST)(char* stage1, char* vect, char* uplo, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float* d, float* e, float complex* hous, blasint* lhous, float complex* work, blasint* lwork, blasint* info)
#endif
{
	void (*fn) (void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info);
	void (*fn_hook) (void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.chetrd_hb2st.f77_blas_function; 
	fn_hook = __flexiblas_hooks->chetrd_hb2st.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) stage1, (void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) hous, (void*) lhous, (void*) work, (void*) lwork, (void*) info); 
		return;
	} else {
		hook_pos_chetrd_hb2st = 0;
		fn_hook((void*) stage1, (void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) hous, (void*) lhous, (void*) work, (void*) lwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void chetrd_hb2st_(char* stage1, char* vect, char* uplo, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float* d, float* e, float complex* hous, blasint* lhous, float complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL_(chetrd_hb2st,CHETRD_HB2ST)))));
#else
void chetrd_hb2st(char* stage1, char* vect, char* uplo, blasint* n, blasint* kd, float complex* ab, blasint* ldab, float* d, float* e, float complex* hous, blasint* lhous, float complex* work, blasint* lwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL_(chetrd_hb2st,CHETRD_HB2ST)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_chetrd_hb2st_(void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info)
{
	void (*fn) (void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info);

	fn = current_backend->lapack.chetrd_hb2st.f77_blas_function; 

		fn((void*) stage1, (void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) hous, (void*) lhous, (void*) work, (void*) lwork, (void*) info); 

	return;
}

void flexiblas_real_chetrd_hb2st(void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_real_chetrd_hb2st_")));





/* Chainloader for Hooks */


void flexiblas_chain_chetrd_hb2st_(void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info)
{
	void (*fn) (void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info);
	void (*fn_hook) (void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info);

	fn      = current_backend->lapack.chetrd_hb2st.f77_blas_function; 

    hook_pos_chetrd_hb2st ++;
    if( hook_pos_chetrd_hb2st < __flexiblas_hooks->chetrd_hb2st.nhook) {
        fn_hook = __flexiblas_hooks->chetrd_hb2st.f77_hook_function[hook_pos_chetrd_hb2st];
        fn_hook((void*) stage1, (void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) hous, (void*) lhous, (void*) work, (void*) lwork, (void*) info);
    } else {
        hook_pos_chetrd_hb2st = 0;
		fn((void*) stage1, (void*) vect, (void*) uplo, (void*) n, (void*) kd, (void*) ab, (void*) ldab, (void*) d, (void*) e, (void*) hous, (void*) lhous, (void*) work, (void*) lwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_chetrd_hb2st(void* stage1, void* vect, void* uplo, void* n, void* kd, void* ab, void* ldab, void* d, void* e, void* hous, void* lhous, void* work, void* lwork, void* info)  __attribute__((alias("flexiblas_chain_chetrd_hb2st_")));




