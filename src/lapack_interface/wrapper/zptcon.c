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



static TLS_STORE uint8_t hook_pos_zptcon = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(zptcon,ZPTCON)(blasint* n, double* d, double complex* e, double* anorm, double* rcond, double* rwork, blasint* info)
#else
void FC_GLOBAL(zptcon,ZPTCON)(blasint* n, double* d, double complex* e, double* anorm, double* rcond, double* rwork, blasint* info)
#endif
{
	void (*fn) (void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info);
	void (*fn_hook) (void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.zptcon.f77_blas_function; 
	fn_hook = __flexiblas_hooks->zptcon.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) n, (void*) d, (void*) e, (void*) anorm, (void*) rcond, (void*) rwork, (void*) info); 
		return;
	} else {
		hook_pos_zptcon = 0;
		fn_hook((void*) n, (void*) d, (void*) e, (void*) anorm, (void*) rcond, (void*) rwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void zptcon_(blasint* n, double* d, double complex* e, double* anorm, double* rcond, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zptcon,ZPTCON)))));
#else
void zptcon(blasint* n, double* d, double complex* e, double* anorm, double* rcond, double* rwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(zptcon,ZPTCON)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_zptcon_(void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info)
{
	void (*fn) (void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info);

	fn = current_backend->lapack.zptcon.f77_blas_function; 

		fn((void*) n, (void*) d, (void*) e, (void*) anorm, (void*) rcond, (void*) rwork, (void*) info); 

	return;
}

void flexiblas_real_zptcon(void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info)  __attribute__((alias("flexiblas_real_zptcon_")));





/* Chainloader for Hooks */


void flexiblas_chain_zptcon_(void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info)
{
	void (*fn) (void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info);
	void (*fn_hook) (void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info);

	fn      = current_backend->lapack.zptcon.f77_blas_function; 

    hook_pos_zptcon ++;
    if( hook_pos_zptcon < __flexiblas_hooks->zptcon.nhook) {
        fn_hook = __flexiblas_hooks->zptcon.f77_hook_function[hook_pos_zptcon];
        fn_hook((void*) n, (void*) d, (void*) e, (void*) anorm, (void*) rcond, (void*) rwork, (void*) info);
    } else {
        hook_pos_zptcon = 0;
		fn((void*) n, (void*) d, (void*) e, (void*) anorm, (void*) rcond, (void*) rwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_zptcon(void* n, void* d, void* e, void* anorm, void* rcond, void* rwork, void* info)  __attribute__((alias("flexiblas_chain_zptcon_")));




