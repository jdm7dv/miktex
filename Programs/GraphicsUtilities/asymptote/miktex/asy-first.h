/* miktex/asy-first.h:

   Copyright (C) 2018 Christian Schenk

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published
   by the Free Software Foundation; either version 2, or (at your
   option) any later version.

   This file is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this file; if not, write to the Free Software
   Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307,
   USA.  */

#if defined(_MSC_VER)
#  pragma once
#endif

#include <miktex/ExitThrows>

#if !defined(MIKTEX_BEGIN_NS)
#define MIKTEX_BEGIN_NS                         \
namespace MiKTeX {                              \
  namespace Aymptote {
#define MIKTEX_END_NS                           \
  }                                             \
}
#endif
