#if defined(__cplusplus)
extern "C" {
#endif
/*
  Copyright 2002-2004 John Plevyak, All Rights Reserved
*/

#ifndef _lex_H_
#define _lex_H_

/* #define LIVE_DIFF_IN_TRANSITIONS */

struct Grammar;

typedef struct ScanStateTransition {
  uint index;
  VecAction live_diff;
  VecAction accepts_diff;
} ScanStateTransition;

typedef struct ScanState {
  uint index;
  struct ScanState *chars[256];
  VecAction accepts;
  VecAction live;
  ScanStateTransition *transition[256];
} ScanState;

#ifndef __dparser_ptr__
void build_scanners(struct Grammar *g);
#endif

#endif
#if defined(__cplusplus)
}
#endif
