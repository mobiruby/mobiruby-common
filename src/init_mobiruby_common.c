//
//  Initialize mobiruby-common
// 
//  See Copyright Notice in mobiruby-common.h
//

#include "mobiruby_common.h"
#include "mruby_require.h"

#include "mruby.h"

void init_mobiruby_common_module(mrb_state *mrb)
{
    mrb_init_kernel_require(mrb);  /* initialize this library */
}
