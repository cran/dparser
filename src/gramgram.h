/*
  Copyright 2002-2004 John Plevyak, All Rights Reserved
*/
#ifndef _gramgram_H_
#define _gramgram_H_

struct Production;
struct Rule;
struct Elem;

typedef struct ParseNode_User {
  struct Production *p;
  struct Rule *r;
  struct Elem *e;
  unsigned int kind;
} ParseNode_User;

#define D_ParseNode_User ParseNode_User

#define D_ParseNode_Globals struct Grammar


#endif
