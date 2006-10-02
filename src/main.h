/*
 *  Copyright (C) 2006 Giuseppe Torelli - <colossus73@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Street #330, Boston, MA 02111-1307, USA.
 */

#ifndef MAIN_H
#define MAIN_H

#include <gtk/gtk.h>
#include <glib.h>
#include "interface.h"
#include "support.h"
#include "archive.h"
#include "callbacks.h"

GtkWidget *MainWindow;
GList *ArchiveSuffix;
GList *ArchiveType;
const gchar *locale;

void GetAvailableCompressors();
void xa_set_button_state ( gboolean, gboolean,gboolean,gboolean, gboolean, gboolean );
gboolean SpawnSyncCommand ( gchar *command );
XArchive *xa_init_structure_from_cmd_line (char *filename);
#endif /* MAIN_H */

