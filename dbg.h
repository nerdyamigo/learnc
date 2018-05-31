#ifndef __dbg_h__
#define __dbg_g__

#include <stdio.h>
#include <errno.h>
#include <string.h>

#ifdef NDEBUG
#define debug(M, ...)
#else
#define debug(M, ...) fprintf(stderr, "DEBUG %s: %d: " M "\n",\
	__FILE__, __LINE__, ##__VA_ARGS__)
#endif

#define clean_errno() (errno == 0 ? "None" : strerror(errno))

#define log_err(M, ...) fprintf(sterr, \
"[ERROR] (%s:%d: errno: %s) " M "\n", __FILE__, __LINE__, \
cleanerrno(), ##__VA_ARGS__)

