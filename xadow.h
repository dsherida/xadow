/*
  xadow.h
  2013 Copyright (c) Seeed Technology Inc.  All right reserved.

  Author:Loovee
  2013-6-17
 
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __XADOW_H__
#define __XADOW_H__

#include "xadowDfs.h"

class xadow{

private:

private:

#if EN_BARO
    char bmp085Read(unsigned char address);
    int bmp085ReadInt(unsigned char address);
#endif

#if EN_ACC
    void adxl_init();
#endif

public:

    void init();
    void init_io();
    
#if EN_BARO
    long getBaro();                             // get barometer
#endif

#if EN_ACC
    unsigned char readAcc(double *Xg, double *Yg, double *Zg);
#endif
};

extern xadow Xadow;

#endif

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/