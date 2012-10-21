#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/string.h"
#include "mruby/proc.h"

static mrb_code iseq_0[] = {
  0x01000005,
  0x01800011,
  0x01004043,
  0x010000c5,
  0x01000091,
  0x01008020,
  0x0000004a,
};

static mrb_code iseq_1[] = {
  0x01000048,
  0x018002c0,
  0x01000046,
  0x01000048,
  0x018004c0,
  0x01004046,
  0x01000048,
  0x018006c0,
  0x01008046,
  0x00000005,
  0x00000029,
};

static mrb_code iseq_2[] = {
  0x00000026,
  0x0100003d,
  0x02000006,
  0x028000bd,
  0x020000a0,
  0x02000006,
  0x0280013d,
  0x03008001,
  0x02004120,
  0x02000029,
};

static mrb_code iseq_3[] = {
  0x00000026,
  0x01800006,
  0x0200003d,
  0x02800091,
  0x01800120,
  0x01800029,
};

static mrb_code iseq_4[] = {
  0x00000026,
  0x01800006,
  0x0200003d,
  0x02800006,
  0x02804020,
  0x01800120,
  0x01800029,
};

void
init_mobi_common_test(mrb_state *mrb)
{
  int n = mrb->irep_len;
  int idx = n;
  int ai;
  mrb_irep *irep;

  mrb_add_irep(mrb, idx+5);

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 2;
  irep->nregs = 4;
  irep->ilen = 7;
  irep->iseq = iseq_0;
  irep->slen = 3;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*3);
  irep->syms[0] = mrb_intern(mrb, "TestCase");
  irep->syms[1] = mrb_intern(mrb, "RequireTest1");
  irep->syms[2] = mrb_intern(mrb, "run");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 2;
  irep->nregs = 3;
  irep->ilen = 11;
  irep->iseq = iseq_1;
  irep->slen = 3;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*3);
  irep->syms[0] = mrb_intern(mrb, "test_10_require1");
  irep->syms[1] = mrb_intern(mrb, "test_20_check_const");
  irep->syms[2] = mrb_intern(mrb, "test_30_check_func");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 4;
  irep->nregs = 7;
  irep->ilen = 10;
  irep->iseq = iseq_2;
  irep->slen = 2;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*2);
  irep->syms[0] = mrb_intern(mrb, "require");
  irep->syms[1] = mrb_intern(mrb, "eq");
  irep->plen = 3;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*3);
  irep->pool[0] = mrb_str_new(mrb, "OK", 2);
  irep->pool[1] = mrb_str_new(mrb, "require1", 8);
  irep->pool[2] = mrb_str_new(mrb, "OK", 2);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 3;
  irep->nregs = 6;
  irep->ilen = 6;
  irep->iseq = iseq_3;
  irep->slen = 2;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*2);
  irep->syms[0] = mrb_intern(mrb, "eq");
  irep->syms[1] = mrb_intern(mrb, "ReqConst1");
  irep->plen = 1;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*1);
  irep->pool[0] = mrb_str_new(mrb, "C1", 2);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 3;
  irep->nregs = 6;
  irep->ilen = 7;
  irep->iseq = iseq_4;
  irep->slen = 2;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*2);
  irep->syms[0] = mrb_intern(mrb, "eq");
  irep->syms[1] = mrb_intern(mrb, "require1");
  irep->plen = 1;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*1);
  irep->pool[0] = mrb_str_new(mrb, "REQUIRE1", 8);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  mrb_run(mrb, mrb_proc_new(mrb, mrb->irep[n]), mrb_top_self(mrb));
}
