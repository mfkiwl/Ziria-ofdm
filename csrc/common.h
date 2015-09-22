#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#ifndef DSP
#include <xmmintrin.h>
#include <emmintrin.h>
#else
#include "ORILIB_t.h"
#define STRUCT_IO_T_MEMWRITER_STATE
#endif


#include "types.h"
#include "wpl_alloc.h"
#include "utils.h"
#include "buf.h"

#ifdef __GNUC__
#include "sora_ext_lib.c"
#endif
