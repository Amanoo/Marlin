/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 KOhm, beta25 = 4550 K, 4.7 kOhm pull-up, TDK NTCG104LH104KT1 https://product.tdk.com/en/search/sensor/ntc/chip-ntc-thermistor/info?part_no=NTCG104LH104KT1
constexpr temp_entry_t temptable_2000[] PROGMEM = {
{ OV(155), 4 },
{ OV(170), 6 },
{ OV(185), 8 },
{ OV(200), 10 },
{ OV(215), 12 },
{ OV(243), 15 },
{ OV(268), 18 },
{ OV(278), 19 },
{ OV(287), 20 },
{ OV(296), 21 },
{ OV(306), 22 },
{ OV(325), 24 },
{ OV(346), 26 },
{ OV(377), 29 },
{ OV(400), 31 },
{ OV(420), 33 },
{ OV(430), 34 },
{ OV(470), 38 },
{ OV(476), 39 },
{ OV(493), 41 },
{ OV(505), 42 },
{ OV(535), 45 },
{ OV(570), 49 },
{ OV(622), 54 },
{ OV(644), 56 },
{ OV(670), 60 },
{ OV(702), 64 },
{ OV(730), 67 },
{ OV(760), 72 },
{ OV(778), 74 },
{ OV(797), 77 },
{ OV(810), 80 },
{ OV(840), 85 },
{ OV(850), 87 },
{ OV(863), 90 },
{ OV(870), 92 },
{ OV(883), 95 }
};
