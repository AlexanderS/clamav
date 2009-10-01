/*
 *  Copyright (C) 2009 Sourcefire, Inc.
 *
 *  Authors: Tomasz Kojm <tkojm@clamav.net>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#ifndef __MACHO_H
#define __MACHO_H

#include "others.h"
#include "execs.h"
#include "fmap.h"

int cli_scanmacho(int fd, cli_ctx *ctx, struct cli_exe_info *fileinfo);
int cli_machoheader(struct F_MAP *map, struct cli_exe_info *fileinfo);
int cli_scanmacho_unibin(int fd, cli_ctx *ctx);

#endif
