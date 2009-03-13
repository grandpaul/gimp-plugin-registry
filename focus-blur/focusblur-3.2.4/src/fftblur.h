/* Focus Blur -- blur with focus plug-in.
 * Copyright (C) 2002-2008 Kyoichiro Suda
 *
 * The GIMP -- an image manipulation program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __FOCUSBLUR_FFTBLUR_H__
#define __FOCUSBLUR_FFTBLUR_H__


#include <glib/gmacros.h>
#include <glib/gtypes.h>
#include <libgimpwidgets/gimpwidgetstypes.h>

#include "focusblurparam.h"


G_BEGIN_DECLS


gboolean        focusblur_fft_execute   (FblurParam       *param,
                                         FblurQualityType  quality,
                                         GimpPreview      *preview);



G_END_DECLS

#endif /* __FOCUSBLUR_FFTBLUR_H__ */