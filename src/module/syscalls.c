#include "config.h"
#include "syscalls.h"
#include "syscalls/internal.h"

unsigned long *krf_faultable_table[KRF_NR_SYSCALLS] = {};
unsigned long *krf_sys_call_table[KRF_NR_SYSCALLS] = {};
unsigned long **sys_call_table = NULL;

#ifdef KRF_CODEGEN
#include "syscalls.gen.x"
#endif
