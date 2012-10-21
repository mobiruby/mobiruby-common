#include "mruby.h"
#include "mruby/irep.h"
#include "mruby/string.h"
#include "mruby/proc.h"

static mrb_code iseq_0[] = {
  0x01000005,
  0x01800005,
  0x01000043,
  0x010000c5,
  0x0000004a,
};

static mrb_code iseq_1[] = {
  0x01000006,
  0x01800084,
  0x010000a0,
  0x01000048,
  0x018002c0,
  0x01008046,
  0x01000048,
  0x018004c0,
  0x0100c046,
  0x01000048,
  0x018006c0,
  0x01010046,
  0x01000048,
  0x018008c0,
  0x01014046,
  0x01000048,
  0x01800ac0,
  0x01018046,
  0x01000048,
  0x01800cc0,
  0x0101c046,
  0x01000006,
  0x01008047,
  0x018014c0,
  0x0101c046,
  0x00000005,
  0x00000029,
};

static mrb_code iseq_2[] = {
  0x00000026,
  0x0180c037,
  0x0180000e,
  0x01800005,
  0x0180008e,
  0x01800029,
};

static mrb_code iseq_3[] = {
  0x04100026,
  0x00400097,
  0x00400097,
  0x01800005,
  0x03004001,
  0x03808001,
  0x030000b2,
  0x03400219,
  0x03000006,
  0x0380003d,
  0x030040a0,
  0x00400417,
  0x03000006,
  0x038000bd,
  0x030040a0,
  0x0300010d,
  0x0380020d,
  0x0400c001,
  0x0381c137,
  0x0300c0a0,
  0x03000029,
};

static mrb_code iseq_4[] = {
  0x02100026,
  0x00400097,
  0x00400097,
  0x01000005,
  0x02804001,
  0x02c00219,
  0x02800006,
  0x0300003d,
  0x028000a0,
  0x00400417,
  0x02800006,
  0x030000bd,
  0x028000a0,
  0x0280008d,
  0x0300018d,
  0x03808001,
  0x03018137,
  0x028080a0,
  0x02800029,
};

static mrb_code iseq_5[] = {
  0x02000026,
  0x02000006,
  0x02804001,
  0x020000a0,
  0x02000029,
};

static mrb_code iseq_6[] = {
  0x04100026,
  0x00400097,
  0x00400097,
  0x01800005,
  0x03000006,
  0x03804001,
  0x04008001,
  0x0480c001,
  0x030001a0,
  0x03000029,
};

static mrb_code iseq_7[] = {
  0x00000026,
  0x0180c037,
  0x0180000e,
  0x01800006,
  0x02000006,
  0x02008020,
  0x018040a0,
  0x01800006,
  0x0180c020,
  0x02000340,
  0x01810021,
  0x01814020,
  0x02000540,
  0x01818021,
  0x01800006,
  0x01804020,
  0x0180000d,
  0x0181c020,
  0x01c00099,
  0x00400197,
  0x0100000d,
  0x01800740,
  0x01018021,
  0x01000029,
};

static mrb_code iseq_8[] = {
  0x02000026,
  0x02004001,
  0x02000020,
  0x02bfff83,
  0x03400203,
  0x02004120,
  0x0280003d,
  0x020080b2,
  0x02000029,
};

static mrb_code iseq_9[] = {
  0x02000026,
  0x0080000e,
  0x0040071a,
  0x02800006,
  0x0300003d,
  0x03804001,
  0x0301c03e,
  0x038000bd,
  0x0301c03e,
  0x028040a0,
  0x02800006,
  0x03004001,
  0x028080a0,
  0x02800006,
  0x0300013d,
  0x0280c0a0,
  0x00400897,
  0x0280001b,
  0x03000211,
  0x03814001,
  0x030140a0,
  0x03400098,
  0x00400517,
  0x01814001,
  0x02800006,
  0x030001bd,
  0x0280c0a0,
  0x0280030d,
  0x0300000d,
  0x0380c001,
  0x03018137,
  0x0281c0a0,
  0x00400117,
  0x0280001d,
  0x0080001c,
  0x02800005,
  0x0280000e,
  0x02800029,
};

static mrb_code iseq_10[] = {
  0x02000026,
  0x02000006,
  0x02804001,
  0x020000a0,
  0x02000029,
};

static mrb_code iseq_11[] = {
  0x00000026,
  0x01800006,
  0x01800020,
  0x01804020,
  0x01800029,
};

void
init_unittest(mrb_state *mrb)
{
  int n = mrb->irep_len;
  int idx = n;
  int ai;
  mrb_irep *irep;

  mrb_add_irep(mrb, idx+12);

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 2;
  irep->nregs = 4;
  irep->ilen = 5;
  irep->iseq = iseq_0;
  irep->slen = 1;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*1);
  irep->syms[0] = mrb_intern(mrb, "TestCase");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 2;
  irep->nregs = 4;
  irep->ilen = 27;
  irep->iseq = iseq_1;
  irep->slen = 8;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*8);
  irep->syms[0] = mrb_intern(mrb, "attr_reader");
  irep->syms[1] = mrb_intern(mrb, "errors");
  irep->syms[2] = mrb_intern(mrb, "initialize");
  irep->syms[3] = mrb_intern(mrb, "assert_equal");
  irep->syms[4] = mrb_intern(mrb, "assert");
  irep->syms[5] = mrb_intern(mrb, "a");
  irep->syms[6] = mrb_intern(mrb, "eq");
  irep->syms[7] = mrb_intern(mrb, "run");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 3;
  irep->nregs = 4;
  irep->ilen = 6;
  irep->iseq = iseq_2;
  irep->slen = 2;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*2);
  irep->syms[0] = mrb_intern(mrb, "@errors");
  irep->syms[1] = mrb_intern(mrb, "@current_test");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 6;
  irep->nregs = 9;
  irep->ilen = 21;
  irep->iseq = iseq_3;
  irep->slen = 5;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*5);
  irep->syms[0] = mrb_intern(mrb, "==");
  irep->syms[1] = mrb_intern(mrb, "print");
  irep->syms[2] = mrb_intern(mrb, "@errors");
  irep->syms[3] = mrb_intern(mrb, "<<");
  irep->syms[4] = mrb_intern(mrb, "@current_test");
  irep->plen = 2;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*2);
  irep->pool[0] = mrb_str_new(mrb, ".", 1);
  irep->pool[1] = mrb_str_new(mrb, "*", 1);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 5;
  irep->nregs = 8;
  irep->ilen = 19;
  irep->iseq = iseq_4;
  irep->slen = 4;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*4);
  irep->syms[0] = mrb_intern(mrb, "print");
  irep->syms[1] = mrb_intern(mrb, "@errors");
  irep->syms[2] = mrb_intern(mrb, "<<");
  irep->syms[3] = mrb_intern(mrb, "@current_test");
  irep->plen = 2;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*2);
  irep->pool[0] = mrb_str_new(mrb, ".", 1);
  irep->pool[1] = mrb_str_new(mrb, "*", 1);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 4;
  irep->nregs = 6;
  irep->ilen = 5;
  irep->iseq = iseq_5;
  irep->slen = 1;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*1);
  irep->syms[0] = mrb_intern(mrb, "assert");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 6;
  irep->nregs = 10;
  irep->ilen = 10;
  irep->iseq = iseq_6;
  irep->slen = 1;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*1);
  irep->syms[0] = mrb_intern(mrb, "assert_equal");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 3;
  irep->nregs = 5;
  irep->ilen = 24;
  irep->iseq = iseq_7;
  irep->slen = 8;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*8);
  irep->syms[0] = mrb_intern(mrb, "@errors");
  irep->syms[1] = mrb_intern(mrb, "puts");
  irep->syms[2] = mrb_intern(mrb, "class");
  irep->syms[3] = mrb_intern(mrb, "methods");
  irep->syms[4] = mrb_intern(mrb, "select");
  irep->syms[5] = mrb_intern(mrb, "sort");
  irep->syms[6] = mrb_intern(mrb, "each");
  irep->syms[7] = mrb_intern(mrb, "empty?");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 4;
  irep->nregs = 7;
  irep->ilen = 9;
  irep->iseq = iseq_8;
  irep->slen = 3;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*3);
  irep->syms[0] = mrb_intern(mrb, "to_s");
  irep->syms[1] = mrb_intern(mrb, "[]");
  irep->syms[2] = mrb_intern(mrb, "==");
  irep->plen = 1;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*1);
  irep->pool[0] = mrb_str_new(mrb, "test_", 5);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 5;
  irep->nregs = 8;
  irep->ilen = 38;
  irep->iseq = iseq_9;
  irep->slen = 8;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*8);
  irep->syms[0] = mrb_intern(mrb, "@current_test");
  irep->syms[1] = mrb_intern(mrb, "print");
  irep->syms[2] = mrb_intern(mrb, "send");
  irep->syms[3] = mrb_intern(mrb, "puts");
  irep->syms[4] = mrb_intern(mrb, "StandardError");
  irep->syms[5] = mrb_intern(mrb, "===");
  irep->syms[6] = mrb_intern(mrb, "@errors");
  irep->syms[7] = mrb_intern(mrb, "<<");
  irep->plen = 4;
  irep->pool = mrb_malloc(mrb, sizeof(mrb_value)*4);
  irep->pool[0] = mrb_str_new(mrb, "  ", 2);
  irep->pool[1] = mrb_str_new(mrb, ": ", 2);
  irep->pool[2] = mrb_str_new(mrb, "", 0);
  irep->pool[3] = mrb_str_new(mrb, "E", 1);
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 4;
  irep->nregs = 6;
  irep->ilen = 5;
  irep->iseq = iseq_10;
  irep->slen = 1;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*1);
  irep->syms[0] = mrb_intern(mrb, "p");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  ai = mrb->arena_idx;
  irep = mrb->irep[idx] = mrb_malloc(mrb, sizeof(mrb_irep));
  irep->idx = idx++;
  irep->nlocals = 3;
  irep->nregs = 4;
  irep->ilen = 5;
  irep->iseq = iseq_11;
  irep->slen = 2;
  irep->syms = mrb_malloc(mrb, sizeof(mrb_sym)*2);
  irep->syms[0] = mrb_intern(mrb, "new");
  irep->syms[1] = mrb_intern(mrb, "run");
  irep->plen = 0;
  irep->pool = NULL;
  mrb->irep_len = idx;
  mrb->arena_idx = ai;

  mrb_run(mrb, mrb_proc_new(mrb, mrb->irep[n]), mrb_top_self(mrb));
}
