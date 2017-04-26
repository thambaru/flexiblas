/* $Id$ */ 
/* 
 Copyright (C) 2013  Martin Köhler, koehlerm@mpi-magdeburg.mpg.de

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h> 
#include <complex.h>
#include "flexiblas_info.h" 

void __flexiblas_info(struct flexiblas_info * info) {
#ifdef ZDOTC_MKL 
	info -> zdotc_is_intel = 1; 
	info -> zdotu_is_intel = 1; 
	info -> cdotc_is_intel = 1; 
	info -> cdotu_is_intel = 1; 
#endif 

#ifdef  SCABS_MISSING 
	info -> scabs1_missing = 1; 
#endif

}


/* MKL i/omatcopy adjustment  */
#if defined(MKL) && defined(EXTBLAS_ENABLED)
void mkl_domatcopy_(void *, void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_somatcopy_(void *, void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_comatcopy_(void *, void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_zomatcopy_(void *, void *, void *, void *, void *, void *, void *, void *, void *); 

void mkl_dimatcopy_(void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_simatcopy_(void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_cimatcopy_(void *, void *, void *, void *, void *, void *, void *, void *); 
void mkl_zimatcopy_(void *, void *, void *, void *, void *, void *, void *, void *); 

void domatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, double *alpha, double *A, int *lda, double *B, int *ldb){
	mkl_domatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, B, ldb); 
}
void somatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, float *alpha, float *A, int *lda, float *B, int *ldb){
	mkl_somatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, B, ldb); 
}
void comatcopy_( char* ORDER, char* TRANS, int *rows, int *cols,  float complex *alpha,  float complex *A, int *lda,  float complex *B, int *ldb){
	mkl_comatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, B, ldb); 
}
void zomatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, double complex *alpha, double complex *A, int *lda, double complex *B, int *ldb){
	mkl_zomatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, B, ldb); 
}

void dimatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, double *alpha, double *A, int *lda, int *ldb){
	mkl_dimatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, ldb); 
}
void simatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, float *alpha, float *A, int *lda, int *ldb){
	mkl_simatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda, ldb); 
}
void cimatcopy_( char* ORDER, char* TRANS, int *rows, int *cols,  float complex *alpha,  float complex *A, int *lda,  int *ldb){
	mkl_cimatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda,ldb); 
}
void zimatcopy_( char* ORDER, char* TRANS, int *rows, int *cols, double complex *alpha, double complex *A, int *lda, int *ldb){
	mkl_zimatcopy_(ORDER, TRANS, rows, cols, alpha, A, lda,ldb); 
}


#endif

/*-----------------------------------------------------------------------------
 *  Dummy Declaration. 
 *-----------------------------------------------------------------------------*/
void	caxpy_();
void	ccopy_();
void	cdotc_();
void	cdotu_();
void	cgbmv_();
void	cgemm_();
void	cgemv_();
void	cgerc_();
void	cgeru_();
void	chbmv_();
void	chemm_();
void	chemv_();
void	cher2_();
void	cher2k_();
void	cher_();
void	cherk_();
void	chpmv_();
void	chpr2_();
void	chpr_();
void	crotg_();
void	cscal_();
void	csrot_();
void	csscal_();
void	cswap_();
void	csymm_();
void	csyr2k_();
void	csyrk_();
void	ctbmv_();
void	ctbsv_();
void	ctpmv_();
void	ctpsv_();
void	ctrmm_();
void	ctrmv_();
void	ctrsm_();
void	ctrsv_();
void	dasum_();
void	daxpy_();
void	dcopy_();
void	ddot_();
void	dgbmv_();
void	dgemm_();
void	dgemv_();
void	dger_();
void	dnrm2_();
void	drot_();
void	drotg_();
void	drotm_();
void	drotmg_();
void	dsbmv_();
void	dscal_();
void	dsdot_();
void	dspmv_();
void	dspr2_();
void	dspr_();
void	dswap_();
void	dsymm_();
void	dsymv_();
void	dsyr2_();
void	dsyr2k_();
void	dsyr_();
void	dsyrk_();
void	dtbmv_();
void	dtbsv_();
void	dtpmv_();
void	dtpsv_();
void	dtrmm_();
void	dtrmv_();
void	dtrsm_();
void	dtrsv_();
void	dzasum_();
void	dznrm2_();
void	icamax_();
void	idamax_();
void	isamax_();
void	izamax_();
void	sasum_();
void	saxpy_();
#ifndef SCABS_MISSING
void	scabs1_();
void	dcabs1_();
#endif
void	scasum_();
void	scnrm2_();
void	scopy_();
void	sdot_();
void	sdsdot_();
void	sgbmv_();
void	sgemm_();
void	sgemv_();
void	sger_();
void	snrm2_();
void	srot_();
void	srotg_();
void	srotm_();
void	srotmg_();
void	ssbmv_();
void	sscal_();
void	sspmv_();
void	sspr2_();
void	sspr_();
void	sswap_();
void	ssymm_();
void	ssymv_();
void	ssyr2_();
void	ssyr2k_();
void	ssyr_();
void	ssyrk_();
void	stbmv_();
void	stbsv_();
void	stpmv_();
void	stpsv_();
void	strmm_();
void	strmv_();
void	strsm_();
void	strsv_();
void	zaxpy_();
void	zcopy_();
void	zdotc_();
void	zdotu_();
void	zdrot_();
void	zdscal_();
void	zgbmv_();
void	zgemm_();
void	zgemv_();
void	zgerc_();
void	zgeru_();
void	zhbmv_();
void	zhemm_();
void	zhemv_();
void	zher2_();
void	zher2k_();
void	zher_();
void	zherk_();
void	zhpmv_();
void	zhpr2_();
void	zhpr_();
void	zrotg_();
void	zscal_();
void	zswap_();
void	zsymm_();
void	zsyr2k_();
void	zsyrk_();
void	ztbmv_();
void	ztbsv_();
void	ztpmv_();
void	ztpsv_();
void	ztrmm_();
void	ztrmv_();
void	ztrsm_();
void	ztrsv_();


void __flexiblas_dummy_function_to_include_all_blas_symbols(int dummy){
	caxpy_();
	ccopy_();
	cdotc_();
	cdotu_();
	cgbmv_();
	cgemm_();
	cgemv_();
	cgerc_();
	cgeru_();
	chbmv_();
	chemm_();
	chemv_();
	cher2_();
	cher2k_();
	cher_();
	cherk_();
	chpmv_();
	chpr2_();
	chpr_();
	crotg_();
	cscal_();
	csrot_();
	csscal_();
	cswap_();
	csymm_();
	csyr2k_();
	csyrk_();
	ctbmv_();
	ctbsv_();
	ctpmv_();
	ctpsv_();
	ctrmm_();
	ctrmv_();
	ctrsm_();
	ctrsv_();
	dasum_();
	daxpy_();
	dcopy_();
	ddot_();
	dgbmv_();
	dgemm_();
	dgemv_();
	dger_();
	dnrm2_();
	drot_();
	drotg_();
	drotm_();
	drotmg_();
	dsbmv_();
	dscal_();
	dsdot_();
	dspmv_();
	dspr2_();
	dspr_();
	dswap_();
	dsymm_();
	dsymv_();
	dsyr2_();
	dsyr2k_();
	dsyr_();
	dsyrk_();
	dtbmv_();
	dtbsv_();
	dtpmv_();
	dtpsv_();
	dtrmm_();
	dtrmv_();
	dtrsm_();
	dtrsv_();
	dzasum_();
	dznrm2_();
	icamax_();
	idamax_();
	isamax_();
	izamax_();
	sasum_();
	saxpy_();
#ifndef SCABS_MISSING
	scabs1_();
	dcabs1_();
#endif
	scasum_();
	scnrm2_();
	scopy_();
	sdot_();
	sdsdot_();
	sgbmv_();
	sgemm_();
	sgemv_();
	sger_();
	snrm2_();
	srot_();
	srotg_();
	srotm_();
	srotmg_();
	ssbmv_();
	sscal_();
	sspmv_();
	sspr2_();
	sspr_();
	sswap_();
	ssymm_();
	ssymv_();
	ssyr2_();
	ssyr2k_();
	ssyr_();
	ssyrk_();
	stbmv_();
	stbsv_();
	stpmv_();
	stpsv_();
	strmm_();
	strmv_();
	strsm_();
	strsv_();
	zaxpy_();
	zcopy_();
	zdotc_();
	zdotu_();
	zdrot_();
	zdscal_();
	zgbmv_();
	zgemm_();
	zgemv_();
	zgerc_();
	zgeru_();
	zhbmv_();
	zhemm_();
	zhemv_();
	zher2_();
	zher2k_();
	zher_();
	zherk_();
	zhpmv_();
	zhpr2_();
	zhpr_();
	zrotg_();
	zscal_();
	zswap_();
	zsymm_();
	zsyr2k_();
	zsyrk_();
	ztbmv_();
	ztbsv_();
	ztpmv_();
	ztpsv_();
	ztrmm_();
	ztrmv_();
	ztrsm_();
	ztrsv_();
}



/*-----------------------------------------------------------------------------
 *  CBLAS Interface 
 *-----------------------------------------------------------------------------*/
#ifdef CBLAS_INTERFACE 
void cblas_caxpy();
void cblas_ccopy();
void cblas_cdotc_sub();
void cblas_cdotu_sub();
void cblas_cgbmv();
void cblas_cgemm();
void cblas_cgemv();
void cblas_cgerc();
void cblas_cgeru();
void cblas_chbmv();
void cblas_chemm();
void cblas_chemv();
void cblas_cher2();
void cblas_cher2k();
void cblas_cher();
void cblas_cherk();
void cblas_chpmv();
void cblas_chpr2();
void cblas_chpr();
void cblas_cscal();
void cblas_csscal();
void cblas_cswap();
void cblas_csymm();
void cblas_csyr2k();
void cblas_csyrk();
void cblas_ctbmv();
void cblas_ctbsv();
void cblas_ctpmv();
void cblas_ctpsv();
void cblas_ctrmm();
void cblas_ctrmv();
void cblas_ctrsm();
void cblas_ctrsv();
void cblas_dasum();
void cblas_daxpy();
void cblas_dcopy();
void cblas_ddot();
void cblas_dgbmv();
void cblas_dgemm();
void cblas_dgemv();
void cblas_dger();
void cblas_dnrm2();
void cblas_drot();
void cblas_drotg();
void cblas_drotm();
void cblas_drotmg();
void cblas_dsbmv();
void cblas_dscal();
void cblas_dsdot();
void cblas_dspmv();
void cblas_dspr2();
void cblas_dspr();
void cblas_dswap();
void cblas_dsymm();
void cblas_dsymv();
void cblas_dsyr2();
void cblas_dsyr2k();
void cblas_dsyr();
void cblas_dsyrk();
void cblas_dtbmv();
void cblas_dtbsv();
void cblas_dtpmv();
void cblas_dtpsv();
void cblas_dtrmm();
void cblas_dtrmv();
void cblas_dtrsm();
void cblas_dtrsv();
void cblas_dzasum();
void cblas_dznrm2();
void cblas_icamax();
void cblas_idamax();
void cblas_isamax();
void cblas_izamax();
void cblas_sasum();
void cblas_saxpy();
void cblas_scasum();
void cblas_scnrm2();
void cblas_scopy();
void cblas_sdot();
void cblas_sdsdot();
void cblas_sgbmv();
void cblas_sgemm();
void cblas_sgemv();
void cblas_sger();
void cblas_snrm2();
void cblas_srot();
void cblas_srotg();
void cblas_srotm();
void cblas_srotmg();
void cblas_ssbmv();
void cblas_sscal();
void cblas_sspmv();
void cblas_sspr2();
void cblas_sspr();
void cblas_sswap();
void cblas_ssymm();
void cblas_ssymv();
void cblas_ssyr2();
void cblas_ssyr2k();
void cblas_ssyr();
void cblas_ssyrk();
void cblas_stbmv();
void cblas_stbsv();
void cblas_stpmv();
void cblas_stpsv();
void cblas_strmm();
void cblas_strmv();
void cblas_strsm();
void cblas_strsv();
void cblas_zaxpy();
void cblas_zcopy();
void cblas_zdotc_sub();
void cblas_zdotu_sub();
void cblas_zdscal();
void cblas_zgbmv();
void cblas_zgemm();
void cblas_zgemv();
void cblas_zgerc();
void cblas_zgeru();
void cblas_zhbmv();
void cblas_zhemm();
void cblas_zhemv();
void cblas_zher2();
void cblas_zher2k();
void cblas_zher();
void cblas_zherk();
void cblas_zhpmv();
void cblas_zhpr2();
void cblas_zhpr();
void cblas_zscal();
void cblas_zswap();
void cblas_zsymm();
void cblas_zsyr2k();
void cblas_zsyrk();
void cblas_ztbmv();
void cblas_ztbsv();
void cblas_ztpmv();
void cblas_ztpsv();
void cblas_ztrmm();
void cblas_ztrmv();
void cblas_ztrsm();
void cblas_ztrsv();

void __flexiblas_dummy_function_to_include_all_cblas_symbols(int dummy){
 	cblas_caxpy();
 	cblas_ccopy();
 	cblas_cdotc_sub();
 	cblas_cdotu_sub();
 	cblas_cgbmv();
 	cblas_cgemm();
 	cblas_cgemv();
 	cblas_cgerc();
 	cblas_cgeru();
 	cblas_chbmv();
 	cblas_chemm();
 	cblas_chemv();
 	cblas_cher2();
 	cblas_cher2k();
 	cblas_cher();
 	cblas_cherk();
 	cblas_chpmv();
 	cblas_chpr2();
 	cblas_chpr();
 	cblas_cscal();
 	cblas_csscal();
 	cblas_cswap();
 	cblas_csymm();
 	cblas_csyr2k();
 	cblas_csyrk();
 	cblas_ctbmv();
 	cblas_ctbsv();
 	cblas_ctpmv();
 	cblas_ctpsv();
 	cblas_ctrmm();
 	cblas_ctrmv();
 	cblas_ctrsm();
 	cblas_ctrsv();
 	cblas_dasum();
 	cblas_daxpy();
 	cblas_dcopy();
 	cblas_ddot();
 	cblas_dgbmv();
 	cblas_dgemm();
 	cblas_dgemv();
 	cblas_dger();
 	cblas_dnrm2();
 	cblas_drot();
 	cblas_drotg();
 	cblas_drotm();
 	cblas_drotmg();
 	cblas_dsbmv();
 	cblas_dscal();
 	cblas_dsdot();
 	cblas_dspmv();
 	cblas_dspr2();
 	cblas_dspr();
 	cblas_dswap();
 	cblas_dsymm();
 	cblas_dsymv();
 	cblas_dsyr2();
 	cblas_dsyr2k();
 	cblas_dsyr();
 	cblas_dsyrk();
 	cblas_dtbmv();
 	cblas_dtbsv();
 	cblas_dtpmv();
 	cblas_dtpsv();
 	cblas_dtrmm();
 	cblas_dtrmv();
 	cblas_dtrsm();
 	cblas_dtrsv();
 	cblas_dzasum();
 	cblas_dznrm2();
 	cblas_icamax();
 	cblas_idamax();
 	cblas_isamax();
 	cblas_izamax();
 	cblas_sasum();
 	cblas_saxpy();
 	cblas_scasum();
 	cblas_scnrm2();
 	cblas_scopy();
 	cblas_sdot();
 	cblas_sdsdot();
 	cblas_sgbmv();
 	cblas_sgemm();
 	cblas_sgemv();
 	cblas_sger();
 	cblas_snrm2();
 	cblas_srot();
 	cblas_srotg();
 	cblas_srotm();
 	cblas_srotmg();
 	cblas_ssbmv();
 	cblas_sscal();
 	cblas_sspmv();
 	cblas_sspr2();
 	cblas_sspr();
 	cblas_sswap();
 	cblas_ssymm();
 	cblas_ssymv();
 	cblas_ssyr2();
 	cblas_ssyr2k();
 	cblas_ssyr();
 	cblas_ssyrk();
 	cblas_stbmv();
 	cblas_stbsv();
 	cblas_stpmv();
 	cblas_stpsv();
 	cblas_strmm();
 	cblas_strmv();
 	cblas_strsm();
 	cblas_strsv();
 	cblas_zaxpy();
 	cblas_zcopy();
 	cblas_zdotc_sub();
 	cblas_zdotu_sub();
 	cblas_zdscal();
 	cblas_zgbmv();
 	cblas_zgemm();
 	cblas_zgemv();
 	cblas_zgerc();
 	cblas_zgeru();
 	cblas_zhbmv();
 	cblas_zhemm();
 	cblas_zhemv();
 	cblas_zher2();
 	cblas_zher2k();
 	cblas_zher();
 	cblas_zherk();
 	cblas_zhpmv();
 	cblas_zhpr2();
 	cblas_zhpr();
 	cblas_zscal();
 	cblas_zswap();
 	cblas_zsymm();
 	cblas_zsyr2k();
 	cblas_zsyrk();
 	cblas_ztbmv();
 	cblas_ztbsv();
 	cblas_ztpmv();
 	cblas_ztpsv();
 	cblas_ztrmm();
 	cblas_ztrmv();
 	cblas_ztrsm();
 	cblas_ztrsv();

}
#endif 



