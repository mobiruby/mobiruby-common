//
//  Initialize mobiruby-common
// 
//  See Copyright Notice in mobiruby-common.h
//

#include "mobiruby_common.h"
#include "mruby_require.h"

#include "mruby.h"

void mrb_mobiruby_common_gem_init(mrb_state *mrb)
{
    mrb_init_kernel_require(mrb);  /* initialize this library */
}

void mrb_mobiruby_common_gem_final(mrb_state *mrb)
{
    // finalizer
}
