/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */

/*
 *  Pix
 *
 *  Copyright (C) 2009 Free Software Foundation, Inc.
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
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GTH_IMAGE_SAVER_PNG_H
#define GTH_IMAGE_SAVER_PNG_H

#include <gtk/gtk.h>
#include <pix.h>

G_BEGIN_DECLS

#define GTH_TYPE_IMAGE_SAVER_PNG              (gth_image_saver_png_get_type ())
#define GTH_IMAGE_SAVER_PNG(obj)              (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTH_TYPE_IMAGE_SAVER_PNG, GthImageSaverPng))
#define GTH_IMAGE_SAVER_PNG_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), GTH_IMAGE_SAVER_PNG_TYPE, GthImageSaverPngClass))
#define GTH_IS_IMAGE_SAVER_PNG(obj)           (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTH_TYPE_IMAGE_SAVER_PNG))
#define GTH_IS_IMAGE_SAVER_PNG_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), GTH_TYPE_IMAGE_SAVER_PNG))
#define GTH_IMAGE_SAVER_PNG_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS((obj), GTH_TYPE_IMAGE_SAVER_PNG, GthImageSaverPngClass))

typedef struct _GthImageSaverPng         GthImageSaverPng;
typedef struct _GthImageSaverPngClass    GthImageSaverPngClass;
typedef struct _GthImageSaverPngPrivate  GthImageSaverPngPrivate;

struct _GthImageSaverPng
{
	GthImageSaver __parent;
	GthImageSaverPngPrivate *priv;
};

struct _GthImageSaverPngClass
{
	GthImageSaverClass __parent_class;
};

GType  gth_image_saver_png_get_type  (void);

G_END_DECLS

#endif /* GTH_IMAGE_SAVER_PNG_H */
