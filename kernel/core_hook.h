#ifndef __KSU_H_KSU_CORE
#define __KSU_H_KSU_CORE

#include "linux/init.h"

#if LINUX_VERSION_CODE >= KERNEL_VERSION(6, 8, 0)
extern const struct lsm_id ksu_lsmid;
#endif

void __init ksu_core_init(void);
void ksu_core_exit(void);

#endif
