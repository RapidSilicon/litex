/*
 * Milkymist SoC (Software)
 * Copyright (C) 2012 Sebastien Bourdeauducq
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __HW_DFII_H
#define __HW_DFII_H

#include <hw/common.h>
#include <csrbase.h>

#define DFII_CSR(x)			MMPTR(DFII_BASE+(x))

#define CSR_DFII_CONTROL		DFII_CSR(0x00)

#define DFII_CONTROL_SEL		0x01
#define DFII_CONTROL_CKE		0x02

#define CSR_DFII_COMMAND_P0		DFII_CSR(0x04)
#define CSR_DFII_AH_P0			DFII_CSR(0x08)
#define CSR_DFII_AL_P0			DFII_CSR(0x0C)
#define CSR_DFII_BA_P0			DFII_CSR(0x10)
#define CSR_DFII_WD0_P0			DFII_CSR(0x14)
#define CSR_DFII_WD1_P0			DFII_CSR(0x18)
#define CSR_DFII_WD2_P0			DFII_CSR(0x1C)
#define CSR_DFII_WD3_P0			DFII_CSR(0x20)
#define CSR_DFII_WD4_P0			DFII_CSR(0x24)
#define CSR_DFII_WD5_P0			DFII_CSR(0x28)
#define CSR_DFII_WD6_P0			DFII_CSR(0x2C)
#define CSR_DFII_WD7_P0			DFII_CSR(0x30)
#define CSR_DFII_RD0_P0			DFII_CSR(0x34)
#define CSR_DFII_RD1_P0			DFII_CSR(0x38)
#define CSR_DFII_RD2_P0			DFII_CSR(0x3C)
#define CSR_DFII_RD3_P0			DFII_CSR(0x40)
#define CSR_DFII_RD4_P0			DFII_CSR(0x44)
#define CSR_DFII_RD5_P0			DFII_CSR(0x48)
#define CSR_DFII_RD6_P0			DFII_CSR(0x4C)
#define CSR_DFII_RD7_P0			DFII_CSR(0x50)

#define CSR_DFII_COMMAND_P1		DFII_CSR(0x54)
#define CSR_DFII_AH_P1			DFII_CSR(0x58)
#define CSR_DFII_AL_P1			DFII_CSR(0x5C)
#define CSR_DFII_BA_P1			DFII_CSR(0x60)
#define CSR_DFII_WD0_P1			DFII_CSR(0x64)
#define CSR_DFII_WD1_P1			DFII_CSR(0x68)
#define CSR_DFII_WD2_P1			DFII_CSR(0x6C)
#define CSR_DFII_WD3_P1			DFII_CSR(0x70)
#define CSR_DFII_WD4_P1			DFII_CSR(0x74)
#define CSR_DFII_WD5_P1			DFII_CSR(0x78)
#define CSR_DFII_WD6_P1			DFII_CSR(0x7C)
#define CSR_DFII_WD7_P1			DFII_CSR(0x80)
#define CSR_DFII_RD0_P1			DFII_CSR(0x84)
#define CSR_DFII_RD1_P1			DFII_CSR(0x88)
#define CSR_DFII_RD2_P1			DFII_CSR(0x8C)
#define CSR_DFII_RD3_P1			DFII_CSR(0x90)
#define CSR_DFII_RD4_P1			DFII_CSR(0x94)
#define CSR_DFII_RD5_P1			DFII_CSR(0x98)
#define CSR_DFII_RD6_P1			DFII_CSR(0x9C)
#define CSR_DFII_RD7_P1			DFII_CSR(0xA0)

#define DFII_COMMAND_CS			0x01
#define DFII_COMMAND_WE			0x02
#define DFII_COMMAND_CAS		0x04
#define DFII_COMMAND_RAS		0x08
#define DFII_COMMAND_WRDATA		0x10
#define DFII_COMMAND_RDDATA		0x20

#endif /* __HW_DFII_H */
