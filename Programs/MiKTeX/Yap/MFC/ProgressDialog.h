/* ProgressDialog.h:                                    -*- C++ -*-

   Copyright (C) 2000-2018 Christian Schenk

   This file is part of Yap.

   Yap is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   Yap is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Yap; if not, write to the Free Software Foundation, 59
   Temple Place - Suite 330, Boston, MA 02111-1307, USA. */

#pragma once

class MIKTEXNOVTABLE ProgressDialog
{
public:
  virtual ~ProgressDialog() noexcept = 0;

public:
  virtual bool HasUserCancelled() = 0;

public:
  virtual bool SetLine(unsigned lineNum, const std::string& text) = 0;

public:
  virtual bool SetTitle(const std::string& text) = 0;

public:
  virtual bool StartProgressDialog(HWND hwndParent) = 0;

public:
  virtual bool StopProgressDialog() = 0;

public:
  static ProgressDialog* Create();
};
