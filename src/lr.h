#if defined(__cplusplus)
extern "C" {
#endif
/*
  Copyright 2002-2004 John Plevyak, All Rights Reserved
*/

#ifndef _lr_H_
#define _lr_H_

#ifndef __dparser_ptr__
void build_LR_tables(Grammar *g);
void sort_VecAction(VecAction *v);
uint elem_symbol(Grammar *g, Elem *e);
State *goto_State(State *s, Elem *e);
void free_Action(Action *a);
#endif

#endif
#if defined(__cplusplus)
}
#endif
