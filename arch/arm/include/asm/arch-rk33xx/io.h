/*
 * (C) Copyright 2008 Fuzhou Rockchip Electronics Co., Ltd
 * Peter, Software Engineering, <superpeter.cai@gmail.com>.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef __RKXX_IO_H
#define __RKXX_IO_H


/*
 * RKXX IO memory map:
 *
 */
#if defined(CONFIG_RKCHIP_RK3368)
	#include "io-rk3368.h"
#elif defined(CONFIG_RKCHIP_RK3366)
	#include "io-rk3366.h"
#elif defined(CONFIG_RKCHIP_RK3399)
	#include "io-rk3399.h"
#else
	#error "PLS config io-rkxx.h!"
#endif


#endif /* __RKXX_IO_H */
