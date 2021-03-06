#pragma once

#define USE_RINTERNALS
#include <R.h>
#include <Rinternals.h>

int __extract_int_or_die(SEXP/*INTSXP*/ sexp);
int __extract_boolean_or_die(SEXP/*LGLSXP*/ sexp);
const char* __extract_path_or_die(SEXP/*STRSXP*/ path);
size_t __get_element_size(SEXPTYPE vector_type);
int32_t __1MB_of_elements(size_t element_size);