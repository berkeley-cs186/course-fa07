/*-----------------------------------------------------------------------
 *
 * PostgreSQL locale utilities
 *
 * $PostgreSQL: pgsql/src/include/utils/pg_locale.h,v 1.19.4.1 2005/03/16 00:03:02 momjian Exp $
 *
 * Copyright (c) 2002-2005, PostgreSQL Global Development Group
 *
 *-----------------------------------------------------------------------
 */

#ifndef _PG_LOCALE_
#define _PG_LOCALE_

#include <locale.h>

#include "utils/guc.h"


extern char *locale_messages;
extern char *locale_monetary;
extern char *locale_numeric;
extern char *locale_time;

extern const char *locale_messages_assign(const char *value,
					   bool doit, GucSource source);
extern const char *locale_monetary_assign(const char *value,
					   bool doit, GucSource source);
extern const char *locale_numeric_assign(const char *value,
					  bool doit, GucSource source);
extern const char *locale_time_assign(const char *value,
				   bool doit, GucSource source);

extern bool lc_collate_is_c(void);
extern bool lc_ctype_is_c(void);

/*
 * Return the POSIX lconv struct (contains number/money formatting
 * information) with locale information for all categories.
 */
extern struct lconv *PGLC_localeconv(void);

#endif   /* _PG_LOCALE_ */
