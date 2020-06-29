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



static TLS_STORE uint8_t hook_pos_dlaneg = 0;
#ifdef FLEXIBLAS_ABI_INTEL
int FC_GLOBAL(dlaneg,DLANEG)(blasint* n, double* d, double* lld, double* sigma, double* pivmin, blasint* r)
#else
int FC_GLOBAL(dlaneg,DLANEG)(blasint* n, double* d, double* lld, double* sigma, double* pivmin, blasint* r)
#endif
{
	blasint (*fn) (void* n, void* d, void* lld, void* sigma, void* pivmin, void* r);
	blasint (*fn_hook) (void* n, void* d, void* lld, void* sigma, void* pivmin, void* r);
	blasint ret;

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlaneg.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlaneg.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		ret = fn((void*) n, (void*) d, (void*) lld, (void*) sigma, (void*) pivmin, (void*) r); 
		return ret; 
	} else {
		hook_pos_dlaneg = 0;
		ret=fn_hook((void*) n, (void*) d, (void*) lld, (void*) sigma, (void*) pivmin, (void*) r);
		return ret;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
int dlaneg_(blasint* n, double* d, double* lld, double* sigma, double* pivmin, blasint* r) __attribute__((alias(MTS(FC_GLOBAL(dlaneg,DLANEG)))));
#else
int dlaneg(blasint* n, double* d, double* lld, double* sigma, double* pivmin, blasint* r) __attribute__((alias(MTS(FC_GLOBAL(dlaneg,DLANEG)))));
#endif




/* Real Implementation for Hooks */


blasint flexiblas_real_dlaneg_(void* n, void* d, void* lld, void* sigma, void* pivmin, void* r)
{
	blasint (*fn) (void* n, void* d, void* lld, void* sigma, void* pivmin, void* r);
	blasint ret;

	fn = current_backend->lapack.dlaneg.f77_blas_function; 

		ret = fn((void*) n, (void*) d, (void*) lld, (void*) sigma, (void*) pivmin, (void*) r); 

	return ret ;
}

blasint flexiblas_real_dlaneg(void* n, void* d, void* lld, void* sigma, void* pivmin, void* r)  __attribute__((alias("flexiblas_real_dlaneg_")));





/* Chainloader for Hooks */


blasint flexiblas_chain_dlaneg_(void* n, void* d, void* lld, void* sigma, void* pivmin, void* r)
{
	blasint (*fn) (void* n, void* d, void* lld, void* sigma, void* pivmin, void* r);
	blasint (*fn_hook) (void* n, void* d, void* lld, void* sigma, void* pivmin, void* r);
	blasint ret;

	fn      = current_backend->lapack.dlaneg.f77_blas_function; 

    hook_pos_dlaneg ++;
    if( hook_pos_dlaneg < __flexiblas_hooks->dlaneg.nhook) {
        fn_hook = __flexiblas_hooks->dlaneg.f77_hook_function[hook_pos_dlaneg];
        ret = fn_hook((void*) n, (void*) d, (void*) lld, (void*) sigma, (void*) pivmin, (void*) r);
    } else {
        hook_pos_dlaneg = 0;
		ret = fn((void*) n, (void*) d, (void*) lld, (void*) sigma, (void*) pivmin, (void*) r); 
	}
	return ret ;
}

blasint flexiblas_chain_dlaneg(void* n, void* d, void* lld, void* sigma, void* pivmin, void* r)  __attribute__((alias("flexiblas_chain_dlaneg_")));




