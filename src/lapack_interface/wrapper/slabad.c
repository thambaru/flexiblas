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



static TLS_STORE uint8_t hook_pos_slabad = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(slabad,SLABAD)(float* small, float* large)
#else
void FC_GLOBAL(slabad,SLABAD)(float* small, float* large)
#endif
{
	void (*fn) (void* small, void* large);
	void (*fn_hook) (void* small, void* large);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.slabad.f77_blas_function; 
	fn_hook = __flexiblas_hooks->slabad.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) small, (void*) large); 
		return;
	} else {
		hook_pos_slabad = 0;
		fn_hook((void*) small, (void*) large);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void slabad_(float* small, float* large) __attribute__((alias(MTS(FC_GLOBAL(slabad,SLABAD)))));
#else
void slabad(float* small, float* large) __attribute__((alias(MTS(FC_GLOBAL(slabad,SLABAD)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_slabad_(void* small, void* large)
{
	void (*fn) (void* small, void* large);

	fn = current_backend->lapack.slabad.f77_blas_function; 

		fn((void*) small, (void*) large); 

	return;
}

void flexiblas_real_slabad(void* small, void* large)  __attribute__((alias("flexiblas_real_slabad_")));





/* Chainloader for Hooks */


void flexiblas_chain_slabad_(void* small, void* large)
{
	void (*fn) (void* small, void* large);
	void (*fn_hook) (void* small, void* large);

	fn      = current_backend->lapack.slabad.f77_blas_function; 

    hook_pos_slabad ++;
    if( hook_pos_slabad < __flexiblas_hooks->slabad.nhook) {
        fn_hook = __flexiblas_hooks->slabad.f77_hook_function[hook_pos_slabad];
        fn_hook((void*) small, (void*) large);
    } else {
        hook_pos_slabad = 0;
		fn((void*) small, (void*) large); 
	}
	return;
}

void flexiblas_chain_slabad(void* small, void* large)  __attribute__((alias("flexiblas_chain_slabad_")));




