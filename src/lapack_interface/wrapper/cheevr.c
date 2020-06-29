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



static TLS_STORE uint8_t hook_pos_cheevr = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(cheevr,CHEEVR)(char* jobz, char* range, char* uplo, blasint* n, float complex* a, blasint* lda, float* vl, float* vu, blasint* il, blasint* iu, float* abstol, blasint* m, float* w, float complex* z, blasint* ldz, blasint* isuppz, float complex* work, blasint* lwork, float* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info)
#else
void FC_GLOBAL(cheevr,CHEEVR)(char* jobz, char* range, char* uplo, blasint* n, float complex* a, blasint* lda, float* vl, float* vu, blasint* il, blasint* iu, float* abstol, blasint* m, float* w, float complex* z, blasint* ldz, blasint* isuppz, float complex* work, blasint* lwork, float* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info)
#endif
{
	void (*fn) (void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.cheevr.f77_blas_function; 
	fn_hook = __flexiblas_hooks->cheevr.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) jobz, (void*) range, (void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) abstol, (void*) m, (void*) w, (void*) z, (void*) ldz, (void*) isuppz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 
		return;
	} else {
		hook_pos_cheevr = 0;
		fn_hook((void*) jobz, (void*) range, (void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) abstol, (void*) m, (void*) w, (void*) z, (void*) ldz, (void*) isuppz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void cheevr_(char* jobz, char* range, char* uplo, blasint* n, float complex* a, blasint* lda, float* vl, float* vu, blasint* il, blasint* iu, float* abstol, blasint* m, float* w, float complex* z, blasint* ldz, blasint* isuppz, float complex* work, blasint* lwork, float* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cheevr,CHEEVR)))));
#else
void cheevr(char* jobz, char* range, char* uplo, blasint* n, float complex* a, blasint* lda, float* vl, float* vu, blasint* il, blasint* iu, float* abstol, blasint* m, float* w, float complex* z, blasint* ldz, blasint* isuppz, float complex* work, blasint* lwork, float* rwork, blasint* lrwork, blasint* iwork, blasint* liwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(cheevr,CHEEVR)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_cheevr_(void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

	fn = current_backend->lapack.cheevr.f77_blas_function; 

		fn((void*) jobz, (void*) range, (void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) abstol, (void*) m, (void*) w, (void*) z, (void*) ldz, (void*) isuppz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 

	return;
}

void flexiblas_real_cheevr(void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_real_cheevr_")));





/* Chainloader for Hooks */


void flexiblas_chain_cheevr_(void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)
{
	void (*fn) (void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);
	void (*fn_hook) (void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info);

	fn      = current_backend->lapack.cheevr.f77_blas_function; 

    hook_pos_cheevr ++;
    if( hook_pos_cheevr < __flexiblas_hooks->cheevr.nhook) {
        fn_hook = __flexiblas_hooks->cheevr.f77_hook_function[hook_pos_cheevr];
        fn_hook((void*) jobz, (void*) range, (void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) abstol, (void*) m, (void*) w, (void*) z, (void*) ldz, (void*) isuppz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info);
    } else {
        hook_pos_cheevr = 0;
		fn((void*) jobz, (void*) range, (void*) uplo, (void*) n, (void*) a, (void*) lda, (void*) vl, (void*) vu, (void*) il, (void*) iu, (void*) abstol, (void*) m, (void*) w, (void*) z, (void*) ldz, (void*) isuppz, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) iwork, (void*) liwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_cheevr(void* jobz, void* range, void* uplo, void* n, void* a, void* lda, void* vl, void* vu, void* il, void* iu, void* abstol, void* m, void* w, void* z, void* ldz, void* isuppz, void* work, void* lwork, void* rwork, void* lrwork, void* iwork, void* liwork, void* info)  __attribute__((alias("flexiblas_chain_cheevr_")));




