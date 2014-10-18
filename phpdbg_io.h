/*
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2014 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Anatol Belski <ab@php.net>                                  |
   +----------------------------------------------------------------------+
*/

#ifndef PHPDBG_IO_H
#define PHPDBG_IO_H

#include "phpdbg.h"

PHPDBG_API int
phpdbg_consume_bytes(int sock, char *ptr, int len, int tmo);

PHPDBG_API int
phpdbg_send_bytes(int sock, char *ptr, int len);

PHPDBG_API int
phpdbg_mixed_read(int sock, char *ptr, int len, int tmo TSRMLS_CC);

PHPDBG_API int
phpdbg_mixed_write(int sock, char *ptr, int len TSRMLS_CC);

#endif /* PHPDBG_IO_H */

