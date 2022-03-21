/*
*  src/insn.cpp
*
*  Copyright (C) 2019  Pritam Zope
*/
/*
* Contains instruction, data and bss section format data structures
* an allocated memory block of each structure is returned
*/

#include "insn.hpp"

using namespace csq;

struct operand* csq::insn_class::get_operand_mem()
{
  return new struct operand;
}

struct text* csq::insn_class::get_text_mem()
{
  return new struct text;
}

struct insn* csq::insn_class::get_insn_mem()
{
  struct insn* innew = new struct insn;
  innew->operand_1 = get_operand_mem();
  innew->operand_2 = get_operand_mem();
  return innew;
}

struct data* csq::insn_class::get_data_mem()
{
  struct data* d = new struct data;
  d->is_array = false;
  return d;
}

struct resv* csq::insn_class::get_resv_mem()
{
  struct resv* r = new struct resv;
  r->is_record = false;
  return r;
}

void csq::insn_class::delete_operand(struct operand** opr)
{
  delete *opr;
  *opr = nullptr;
}

void csq::insn_class::delete_insn(struct insn** in)
{
  delete *in;
  *in = nullptr;
}

void csq::insn_class::delete_data(struct data** d)
{
  delete *d;
}

void csq::insn_class::delete_resv(struct resv** r)
{
  delete *r;
}

void csq::insn_class::delete_text(struct text** t)
{
  delete *t;
}



