/*
 *  Rawmidi interface - local header file
 *  Copyright (c) 2000 by Abramo Bagnara <abramo@alsa-project.org>
 *
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Library General Public License for more details.
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "local.h"

typedef struct {
	int (*close)(snd_rawmidi_t *rawmidi);
	int (*nonblock)(snd_rawmidi_t *rawmidi, int nonblock);
	int (*info)(snd_rawmidi_t *rawmidi, snd_rawmidi_info_t *info);
	int (*params)(snd_rawmidi_t *rawmidi, snd_rawmidi_params_t *params);
	int (*status)(snd_rawmidi_t *rawmidi, snd_rawmidi_status_t *status);
	int (*drop)(snd_rawmidi_t *rawmidi, snd_rawmidi_stream_t stream);
	int (*drain)(snd_rawmidi_t *rawmidi, snd_rawmidi_stream_t stream);
	ssize_t (*write)(snd_rawmidi_t *rawmidi, const void *buffer, size_t size);
	ssize_t (*read)(snd_rawmidi_t *rawmidi, void *buffer, size_t size);
} snd_rawmidi_ops_t;

typedef struct _snd_rawmidi_str {
	size_t buffer_size;
	size_t avail_min;
	unsigned int no_active_sensing: 1;
} snd_rawmidi_str_t;

struct _snd_rawmidi {
	char *name;
	snd_rawmidi_type_t type;
	int streams;
	int mode;
	int poll_fd;
	snd_rawmidi_str_t stream[2];
	snd_rawmidi_ops_t *ops;
  
	void *private;
};

int snd_rawmidi_hw_open(snd_rawmidi_t **handle, char *name, int card, int device, int subdevice, int streams, int mode);

