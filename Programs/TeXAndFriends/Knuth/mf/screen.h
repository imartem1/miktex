/* screen.h: METAFONT online displays

   Copyright (C) 1998-2017 Christian Schenk
   Copyright (C) 1998 Wolfgang Kleinschmidt

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

#if defined(MIKTEX_WINDOWS)
bool miktexinitscreen(int w, int h);

void miktexblankrectangle(METAFONTProgram::screencol left_col, METAFONTProgram::screencol right_col, METAFONTProgram::screenrow top_row, METAFONTProgram::screenrow bot_row);

void miktexupdatescreen();

void miktexpaintrow(METAFONTProgram::screenrow r, METAFONTProgram::pixelcolor b, METAFONTProgram::transspec a, METAFONTProgram::screencol n);
#else
inline bool miktexinitscreen(int w, int h)
{
  return false;
}

inline void miktexblankrectangle(METAFONTProgram::screencol left_col, METAFONTProgram::screencol right_col, METAFONTProgram::screenrow top_row, METAFONTProgram::screenrow bot_row)
{
}

inline void miktexupdatescreen()
{
}

inline void miktexpaintrow(METAFONTProgram::screenrow r, METAFONTProgram::pixelcolor b, METAFONTProgram::transspec a, METAFONTProgram::screencol n)
{
}
#endif
