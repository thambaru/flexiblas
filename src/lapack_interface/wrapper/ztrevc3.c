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



static TLS_STORE uint8_t hook_pos_ztrevc3 = 0;
#ifdef FLEXIBLAS_ABI_INTEL
void FC_GLOBAL(ztrevc3,ZTREVC3)(char* side, char* howmny, blasint* selectfunc, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info)
#else
void FC_GLOBAL(ztrevc3,ZTREVC3)(char* side, char* howmny, blasint* selectfunc, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info)
#endif
{
	void (*fn) (void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info);
	void (*fn_hook) (void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info);

    if ( current_backend->post_init != 0 ) {
        __flexiblas_backend_init(current_backend);
        current_backend->post_init = 0;
    }
	fn = current_backend->lapack.ztrevc3.f77_blas_function; 
	fn_hook = __flexiblas_hooks->ztrevc3.f77_hook_function[0]; 
	if ( fn_hook == NULL ) { 
		fn((void*) side, (void*) howmny, (void*) selectfunc, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info); 
		return;
	} else {
		hook_pos_ztrevc3 = 0;
		fn_hook((void*) side, (void*) howmny, (void*) selectfunc, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info);
		return;
	}
}
#ifdef FLEXIBLAS_ABI_IBM
void ztrevc3_(char* side, char* howmny, blasint* selectfunc, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztrevc3,ZTREVC3)))));
#else
void ztrevc3(char* side, char* howmny, blasint* selectfunc, blasint* n, double complex* t, blasint* ldt, double complex* vl, blasint* ldvl, double complex* vr, blasint* ldvr, blasint* mm, blasint* m, double complex* work, blasint* lwork, double* rwork, blasint* lrwork, blasint* info) __attribute__((alias(MTS(FC_GLOBAL(ztrevc3,ZTREVC3)))));
#endif




/* Real Implementation for Hooks */


void flexiblas_real_ztrevc3_(void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info)
{
	void (*fn) (void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info);

	fn = current_backend->lapack.ztrevc3.f77_blas_function; 

		fn((void*) side, (void*) howmny, (void*) selectfunc, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info); 

	return;
}

void flexiblas_real_ztrevc3(void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info)  __attribute__((alias("flexiblas_real_ztrevc3_")));





/* Chainloader for Hooks */


void flexiblas_chain_ztrevc3_(void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info)
{
	void (*fn) (void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info);
	void (*fn_hook) (void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info);

	fn      = current_backend->lapack.ztrevc3.f77_blas_function; 

    hook_pos_ztrevc3 ++;
    if( hook_pos_ztrevc3 < __flexiblas_hooks->ztrevc3.nhook) {
        fn_hook = __flexiblas_hooks->ztrevc3.f77_hook_function[hook_pos_ztrevc3];
        fn_hook((void*) side, (void*) howmny, (void*) selectfunc, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info);
    } else {
        hook_pos_ztrevc3 = 0;
		fn((void*) side, (void*) howmny, (void*) selectfunc, (void*) n, (void*) t, (void*) ldt, (void*) vl, (void*) ldvl, (void*) vr, (void*) ldvr, (void*) mm, (void*) m, (void*) work, (void*) lwork, (void*) rwork, (void*) lrwork, (void*) info); 
	}
	return;
}

void flexiblas_chain_ztrevc3(void* side, void* howmny, void* selectfunc, void* n, void* t, void* ldt, void* vl, void* ldvl, void* vr, void* ldvr, void* mm, void* m, void* work, void* lwork, void* rwork, void* lrwork, void* info)  __attribute__((alias("flexiblas_chain_ztrevc3_")));




