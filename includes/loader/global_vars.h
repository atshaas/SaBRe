/*  Copyright © 2019 Software Reliability Group, Imperial College London
 *
 *  This file is part of SaBRe.
 *
 *  SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef GLOBAL_VARS_H
#define GLOBAL_VARS_H

#include "plugins/sbr_api_defs.h"

#define MAX_ICEPT_RECORDS 50
#define MAX_ICEPT_STRLEN 80

typedef struct {
    char lib_name[MAX_ICEPT_STRLEN];
    char fn_name[MAX_ICEPT_STRLEN];
    sbr_icept_callback_fn callback;
} sbr_fn_icept_local_struct;

extern int registered_icept_cnt;
extern sbr_fn_icept_local_struct intercept_records[MAX_ICEPT_RECORDS];
extern sbr_icept_vdso_callback_fn vdso_callback;
extern sbr_sc_handler_fn plugin_sc_handler;
extern const char *known_syscall_libs[];

#endif /* !GLOBAL_VARS_H */
