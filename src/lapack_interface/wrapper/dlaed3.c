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



static TLS_STORE uint8_t hook_pos_dlaed3 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(dlaed3,DLAED3)(blasint* k, blasint* n, blasint* n1, double* d, double* q, blasint* ldq, double* rho, double* dlamda, double* q2, blasint* indx, blasint* ctot, double* w, double* s, blasint* info)
#else
void FC_GLOBAL(dlaed3,DLAED3)(blasint* k, blasint* n, blasint* n1, double* d, double* q, blasint* ldq, double* rho, double* dlamda, double* q2, blasint* indx, blasint* ctot, double* w, double* s, blasint* info)
#endif
{
	void (*fn) (void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info);
	void (*fn_hook) (void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.dlaed3.f77_blas_function; 
	fn_hook = __flexiblas_hooks->dlaed3.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) k, (void*) n, (void*) n1, (void*) d, (void*) q, (void*) ldq, (void*) rho, (void*) dlamda, (void*) q2, (void*) indx, (void*) ctot, (void*) w, (void*) s, (void*) info); 
		return;
	} else {
		hook_pos_dlaed3 = 0;
		fn_hook((void*) k, (void*) n, (void*) n1, (void*) d, (void*) q, (void*) ldq, (void*) rho, (void*) dlamda, (void*) q2, (void*) indx, (void*) ctot, (void*) w, (void*) s, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void dlaed3_(blasint* k, blasint* n, blasint* n1, double* d, double* q, blasint* ldq, double* rho, double* dlamda, double* q2, blasint* indx, blasint* ctot, double* w, double* s, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaed3,DLAED3)))));
#else
void dlaed3(blasint* k, blasint* n, blasint* n1, double* d, double* q, blasint* ldq, double* rho, double* dlamda, double* q2, blasint* indx, blasint* ctot, double* w, double* s, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(dlaed3,DLAED3)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_dlaed3_(void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info)
{
	void (*fn) (void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info);

	fn = current_backend->lapack.dlaed3.f77_blas_function; 

		fn((void*) k, (void*) n, (void*) n1, (void*) d, (void*) q, (void*) ldq, (void*) rho, (void*) dlamda, (void*) q2, (void*) indx, (void*) ctot, (void*) w, (void*) s, (void*) info); 

	return;
}

void flexiblas_real_dlaed3(void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info)  __attribute__((alias("flexiblas_real_dlaed3_")));





/* Chainloader for Hooks */


void flexiblas_chain_dlaed3_(void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info)
{
	void (*fn) (void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info);
	void (*fn_hook) (void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info);

	fn      = current_backend->lapack.dlaed3.f77_blas_function; 

    hook_pos_dlaed3 ++;
    if( hook_pos_dlaed3 < __flexiblas_hooks->dlaed3.nhook) {
        fn_hook = __flexiblas_hooks->dlaed3.f77_hook_function[hook_pos_dlaed3];
        fn_hook((void*) k, (void*) n, (void*) n1, (void*) d, (void*) q, (void*) ldq, (void*) rho, (void*) dlamda, (void*) q2, (void*) indx, (void*) ctot, (void*) w, (void*) s, (void*) info);
    } else {
        hook_pos_dlaed3 = 0;
		fn((void*) k, (void*) n, (void*) n1, (void*) d, (void*) q, (void*) ldq, (void*) rho, (void*) dlamda, (void*) q2, (void*) indx, (void*) ctot, (void*) w, (void*) s, (void*) info); 
	}
	return;
}

void flexiblas_chain_dlaed3(void* k, void* n, void* n1, void* d, void* q, void* ldq, void* rho, void* dlamda, void* q2, void* indx, void* ctot, void* w, void* s, void* info)  __attribute__((alias("flexiblas_chain_dlaed3_")));




