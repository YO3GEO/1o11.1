/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include "font.h"

const uint8_t gFontBig[95][16] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x70, 0xF8, 0xF8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00},
	{0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x40, 0xF0, 0xF0, 0x40, 0xF0, 0xF0, 0x40, 0x00, 0x04, 0x1F, 0x1F, 0x04, 0x1F, 0x1F, 0x04, 0x00},
	{0x70, 0xF8, 0x88, 0x8F, 0x8F, 0x98, 0x30, 0x00, 0x06, 0x0C, 0x08, 0x38, 0x38, 0x0F, 0x07, 0x00},
	{0x60, 0x60, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x18, 0x18, 0x00},
	{0x00, 0xB0, 0xF8, 0xC8, 0x78, 0xB0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x11, 0x0F, 0x1F, 0x10, 0x00},
	{0x00, 0x20, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0xE0, 0xF0, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x00, 0x00},
	{0x00, 0x00, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x00, 0x00},
	{0x00, 0x40, 0xC0, 0x80, 0x80, 0xC0, 0x40, 0x00, 0x01, 0x05, 0x07, 0x03, 0x03, 0x07, 0x05, 0x01},
	{0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x07, 0x07, 0x01, 0x01, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3C, 0x1C, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x00, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00},
	{0xF0, 0xF8, 0x08, 0x88, 0x48, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x12, 0x11, 0x10, 0x1F, 0x0F, 0x00},
	{0x00, 0x20, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x00},
	{0x10, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x18, 0x00},
	{0x10, 0x18, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x08, 0x18, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0x80, 0xC0, 0x60, 0x30, 0xF8, 0xF8, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0x1F, 0x1F, 0x11, 0x00},
	{0xF8, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x08, 0x00, 0x08, 0x18, 0x10, 0x10, 0x11, 0x1F, 0x0F, 0x00},
	{0xE0, 0xF0, 0x98, 0x88, 0x88, 0x80, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0x18, 0x18, 0x08, 0x08, 0x88, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x01, 0x00, 0x00, 0x00},
	{0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0x70, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x18, 0x0F, 0x07, 0x00},
	{0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1C, 0x0C, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x10, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18, 0x10, 0x00},
	{0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00},
	{0x00, 0x10, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x10, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00},
	{0x30, 0x38, 0x08, 0x88, 0xC8, 0x78, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x1B, 0x00, 0x00, 0x00},
	{0xE0, 0xF0, 0x10, 0x90, 0x90, 0xF0, 0xE0, 0x00, 0x0F, 0x1F, 0x10, 0x17, 0x17, 0x17, 0x03, 0x00},
	{0xC0, 0xE0, 0x30, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x1F, 0x1F, 0x01, 0x01, 0x01, 0x1F, 0x1F, 0x00},
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x10, 0x18, 0x0C, 0x00},
	{0x08, 0xF8, 0xF8, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x18, 0x0F, 0x07, 0x00},
	{0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x11, 0x18, 0x1C, 0x00},
	{0x08, 0xF8, 0xF8, 0x88, 0xC8, 0x18, 0x38, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x01, 0x00, 0x00, 0x00},
	{0xE0, 0xF0, 0x18, 0x08, 0x08, 0x18, 0x30, 0x00, 0x07, 0x0F, 0x18, 0x11, 0x11, 0x0F, 0x1F, 0x00},
	{0xF8, 0xF8, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00},
	{0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x08, 0xF8, 0xF8, 0x08, 0x00, 0x0E, 0x1E, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00},
	{0x08, 0xF8, 0xF8, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x10, 0x1F, 0x1F, 0x01, 0x03, 0x1E, 0x1C, 0x00},
	{0x08, 0xF8, 0xF8, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x10, 0x18, 0x1C, 0x00},
	{0xF8, 0xF8, 0x70, 0xE0, 0x70, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00},
	{0xF8, 0xF8, 0x70, 0xE0, 0xC0, 0xF8, 0xF8, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x01, 0x1F, 0x1F, 0x00},
	{0xE0, 0xF0, 0x18, 0x08, 0x18, 0xF0, 0xE0, 0x00, 0x07, 0x0F, 0x18, 0x10, 0x18, 0x0F, 0x07, 0x00},
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00},
	{0xF0, 0xF8, 0x08, 0x08, 0x08, 0xF8, 0xF0, 0x00, 0x0F, 0x1F, 0x10, 0x1C, 0x78, 0x7F, 0x4F, 0x00},
	{0x08, 0xF8, 0xF8, 0x88, 0x88, 0xF8, 0x70, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x01, 0x1F, 0x1E, 0x00},
	{0x30, 0x78, 0xC8, 0x88, 0x88, 0x38, 0x30, 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x11, 0x1F, 0x0E, 0x00},
	{0x00, 0x38, 0x18, 0xF8, 0xF8, 0x18, 0x38, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00},
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x0C, 0x07, 0x03, 0x00},
	{0xF8, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0x00, 0x07, 0x1F, 0x1C, 0x07, 0x1C, 0x1F, 0x07, 0x00},
	{0x18, 0x78, 0xE0, 0x80, 0xE0, 0x78, 0x18, 0x00, 0x18, 0x1E, 0x07, 0x01, 0x07, 0x1E, 0x18, 0x00},
	{0x00, 0x78, 0xF8, 0x80, 0x80, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00},
	{0x38, 0x18, 0x08, 0x88, 0xC8, 0x78, 0x38, 0x00, 0x1C, 0x1E, 0x13, 0x11, 0x10, 0x18, 0x1C, 0x00},
	{0x00, 0x00, 0xF8, 0xF8, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x10, 0x10, 0x00, 0x00},
	{0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x00},
	{0x00, 0x00, 0x08, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x1F, 0x00, 0x00},
	{0x10, 0x18, 0x0E, 0x07, 0x0E, 0x18, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40},
	{0x00, 0x00, 0x07, 0x0F, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x0E, 0x1F, 0x11, 0x11, 0x0F, 0x1F, 0x10, 0x00},
	{0x08, 0xF8, 0xF8, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x10, 0x1F, 0x0F, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x18, 0x08, 0x00},
	{0x00, 0x80, 0xC0, 0x48, 0xF8, 0xF8, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x11, 0x11, 0x11, 0x19, 0x09, 0x00},
	{0x80, 0xF0, 0xF8, 0x88, 0x18, 0x30, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x4F, 0xDF, 0x90, 0x90, 0xFF, 0x7F, 0x00, 0x00},
	{0x08, 0xF8, 0xF8, 0x80, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00},
	{0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00},
	{0x00, 0x00, 0x00, 0x00, 0x40, 0xD8, 0xD8, 0x00, 0x00, 0x60, 0xE0, 0x80, 0x80, 0xFF, 0x7F, 0x00},
	{0x08, 0xF8, 0xF8, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x1F, 0x1F, 0x03, 0x07, 0x1C, 0x18, 0x00},
	{0x00, 0x00, 0x08, 0xF8, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00},
	{0xC0, 0xC0, 0xC0, 0x80, 0xC0, 0xC0, 0x80, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x1F, 0x00},
	{0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x10, 0x1F, 0x0F, 0x00},
	{0x40, 0xC0, 0x80, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x80, 0xFF, 0xFF, 0x90, 0x10, 0x1F, 0x0F, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x80, 0xC0, 0x40, 0x00, 0x0F, 0x1F, 0x10, 0x90, 0xFF, 0xFF, 0x80, 0x00},
	{0x40, 0xC0, 0x80, 0xC0, 0x40, 0xC0, 0x80, 0x00, 0x10, 0x1F, 0x1F, 0x10, 0x00, 0x00, 0x01, 0x00},
	{0x80, 0xC0, 0x40, 0x40, 0x40, 0xC0, 0x80, 0x00, 0x08, 0x19, 0x13, 0x12, 0x16, 0x1C, 0x08, 0x00},
	{0x40, 0x40, 0xF0, 0xF8, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x18, 0x08, 0x00},
	{0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x0F, 0x1F, 0x10, 0x00},
	{0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x00, 0x07, 0x0F, 0x18, 0x18, 0x0F, 0x07, 0x00},
	{0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x0F, 0x1F, 0x18, 0x0E, 0x18, 0x1F, 0x0F, 0x00},
	{0x40, 0xC0, 0x80, 0x00, 0x80, 0xC0, 0x40, 0x00, 0x10, 0x18, 0x0F, 0x07, 0x0F, 0x18, 0x10, 0x00},
	{0xC0, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0x8F, 0x9F, 0x90, 0x90, 0xD0, 0x7F, 0x3F, 0x00},
	{0xC0, 0xC0, 0x40, 0x40, 0xC0, 0xC0, 0x40, 0x00, 0x18, 0x1C, 0x16, 0x13, 0x11, 0x18, 0x18, 0x00},
	{0x00, 0x80, 0x80, 0xF0, 0x78, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x00},
	{0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x00, 0x00, 0x00},
	{0x00, 0x08, 0x08, 0x78, 0xF0, 0x80, 0x80, 0x00, 0x00, 0x10, 0x10, 0x1F, 0x0F, 0x00, 0x00, 0x00},
	{0x10, 0x18, 0x08, 0x18, 0x10, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
};

#if 0
	// original font
	const uint8_t gFontBigDigits[11][26] =
	{
		{0x00, 0xC0, 0xF0, 0xF8, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x00, 0x07, 0x1F, 0x3F, 0x78, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x0F},
		{0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00},
		{0x00, 0x10, 0x38, 0x38, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x7C, 0x6E, 0x66, 0x67, 0x67, 0x63, 0x61, 0x60, 0x00},
		{0x00, 0x10, 0x18, 0x18, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0xCC, 0xF8, 0xF8, 0x70, 0x00, 0x30, 0x30, 0x30, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x3F, 0x1E},
		{0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x1C, 0x1E, 0x1F, 0x1F, 0x19, 0x18, 0x18, 0x18, 0x7F, 0x7F, 0x7F, 0x18},
		{0x00, 0x00, 0xFC, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x8C, 0x0C, 0x00, 0x00, 0x18, 0x30, 0x70, 0x60, 0x60, 0x60, 0x60, 0x71, 0x7B, 0x3F, 0x1F},
		{0x00, 0xC0, 0xF0, 0xF8, 0x38, 0x9C, 0x8C, 0x8C, 0x8C, 0x8C, 0x9C, 0x38, 0x30, 0x00, 0x0F, 0x1F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x33, 0x3F, 0x1E},
		{0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x8C, 0xEC, 0xFC, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x40, 0x60, 0x78, 0x7C, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x78, 0xF8, 0xDC, 0x8C, 0x8C, 0x8C, 0x8C, 0xDC, 0xF8, 0x78, 0x00, 0x00, 0x1E, 0x3F, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x3F, 0x1E},
		{0x00, 0xF0, 0xF8, 0xB8, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1C, 0xB8, 0xF0, 0xE0, 0x00, 0x11, 0x33, 0x77, 0x67, 0x66, 0x66, 0x66, 0x76, 0x33, 0x3F, 0x1F, 0x07},
		{0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00}
	};
#else
	// VCR font
	const uint8_t gFontBigDigits[11][26] =
	{
		{0x00, 0x00, 0xF8, 0xFC, 0x06, 0x86, 0xC6, 0xE6, 0xF6, 0x76, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x77, 0x67, 0x63, 0x61, 0x60, 0x70, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0x00, 0x00, 0x18, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x7F, 0x7F, 0x60, 0x60, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x18, 0x1C, 0x86, 0x86, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x63, 0x61, 0x61, 0x61, 0x61, 0x61, 0x60, 0x60, 0x00},
		{0x00, 0x00, 0x18, 0x1C, 0x06, 0x06, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x18, 0x38, 0x70, 0x60, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x7F, 0x7F, 0x06, 0x06, 0x00},
		{0x00, 0x00, 0x7E, 0x7E, 0x66, 0x66, 0x66, 0x66, 0x66, 0xE6, 0xC6, 0x86, 0x00, 0x00, 0x00, 0x18, 0x38, 0x70, 0x60, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0xF8, 0xFC, 0x86, 0x86, 0x86, 0x86, 0x86, 0x86, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x1F, 0x3F, 0x71, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x86, 0xC6, 0xE6, 0x7E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00},
		{0x00, 0x00, 0x78, 0xFC, 0xC6, 0x86, 0x86, 0x86, 0x86, 0xC6, 0xFC, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x73, 0x61, 0x61, 0x61, 0x61, 0x73, 0x3F, 0x1E, 0x00},
		{0x00, 0x00, 0x78, 0xFC, 0xC6, 0x86, 0x86, 0x86, 0x86, 0x86, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x18, 0x38, 0x71, 0x61, 0x61, 0x61, 0x61, 0x71, 0x3F, 0x1F, 0x00},
		{0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00}
	};
#endif

const uint8_t gFontSmallDigits[11][7] =
{
	{0x00, 0x3E, 0x41, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 0x00},
	{0x00, 0x62, 0x51, 0x51, 0x49, 0x49, 0x46},
	{0x00, 0x22, 0x41, 0x49, 0x49, 0x4D, 0x32},
	{0x00, 0x18, 0x14, 0x12, 0x11, 0x7F, 0x10},
	{0x00, 0x27, 0x45, 0x45, 0x45, 0x45, 0x39},
	{0x00, 0x3E, 0x49, 0x49, 0x49, 0x49, 0x30},
	{0x00, 0x01, 0x71, 0x09, 0x05, 0x03, 0x00},
	{0x00, 0x36, 0x49, 0x49, 0x49, 0x49, 0x36},
	{0x00, 0x46, 0x49, 0x49, 0x49, 0x29, 0x1E},
	{0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}
};
/*
const uint8_t gFont5x8[95][5] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00},
	{0x00, 0x00, 0x5F, 0x00, 0x00},
	{0x00, 0x07, 0x00, 0x07, 0x00},
	{0x14, 0x7F, 0x14, 0x7F, 0x14},
	{0x24, 0x2A, 0x7F, 0x2A, 0x12},
	{0x23, 0x13, 0x08, 0x64, 0x62},
	{0x36, 0x49, 0x56, 0x20, 0x50},
	{0x00, 0x08, 0x07, 0x03, 0x00},
	{0x00, 0x1C, 0x22, 0x41, 0x00},
	{0x00, 0x41, 0x22, 0x1C, 0x00},
	{0x2A, 0x1C, 0x7F, 0x1C, 0x2A},
	{0x08, 0x08, 0x3E, 0x08, 0x08},
	{0x00, 0x80, 0x70, 0x30, 0x00},
	{0x08, 0x08, 0x08, 0x08, 0x08},
	{0x00, 0x00, 0x60, 0x60, 0x00},
	{0x20, 0x10, 0x08, 0x04, 0x02},

	{0x3E, 0x41, 0x41, 0x41, 0x3E},
	{0x00, 0x42, 0x7F, 0x40, 0x00},
	{0x72, 0x49, 0x49, 0x49, 0x46},
	{0x21, 0x41, 0x49, 0x4D, 0x33},
	{0x18, 0x14, 0x12, 0x7F, 0x10},
	{0x27, 0x45, 0x45, 0x45, 0x39},
	{0x3C, 0x4A, 0x49, 0x49, 0x31},
	{0x41, 0x21, 0x11, 0x09, 0x07},
	{0x36, 0x49, 0x49, 0x49, 0x36},
	{0x46, 0x49, 0x49, 0x29, 0x1E},
	{0x00, 0x00, 0x14, 0x00, 0x00},
	{0x00, 0x40, 0x34, 0x00, 0x00},
	{0x00, 0x08, 0x14, 0x22, 0x41},
	{0x14, 0x14, 0x14, 0x14, 0x14},
	{0x00, 0x41, 0x22, 0x14, 0x08},
	{0x02, 0x01, 0x59, 0x09, 0x06},

	{0x3E, 0x41, 0x5D, 0x59, 0x4E},
	{0x7C, 0x12, 0x11, 0x12, 0x7C},
	{0x7F, 0x49, 0x49, 0x49, 0x36},
	{0x3E, 0x41, 0x41, 0x41, 0x22},
	{0x7F, 0x41, 0x41, 0x41, 0x3E},
	{0x7F, 0x49, 0x49, 0x49, 0x41},
	{0x7F, 0x09, 0x09, 0x09, 0x01},
	{0x3E, 0x41, 0x41, 0x51, 0x73},
	{0x7F, 0x08, 0x08, 0x08, 0x7F},
	{0x00, 0x41, 0x7F, 0x41, 0x00},
	{0x20, 0x40, 0x41, 0x3F, 0x01},
	{0x7F, 0x08, 0x14, 0x22, 0x41},
	{0x7F, 0x40, 0x40, 0x40, 0x40},
	{0x7F, 0x02, 0x1C, 0x02, 0x7F},
	{0x7F, 0x04, 0x08, 0x10, 0x7F},
	{0x3E, 0x41, 0x41, 0x41, 0x3E},

	{0x7F, 0x09, 0x09, 0x09, 0x06},
	{0x3E, 0x41, 0x51, 0x21, 0x5E},
	{0x7F, 0x09, 0x19, 0x29, 0x46},
	{0x26, 0x49, 0x49, 0x49, 0x32},
	{0x03, 0x01, 0x7F, 0x01, 0x03},
	{0x3F, 0x40, 0x40, 0x40, 0x3F},
	{0x1F, 0x20, 0x40, 0x20, 0x1F},
	{0x3F, 0x40, 0x38, 0x40, 0x3F},
	{0x63, 0x14, 0x08, 0x14, 0x63},
	{0x03, 0x04, 0x78, 0x04, 0x03},
	{0x61, 0x59, 0x49, 0x4D, 0x43},
	{0x00, 0x7F, 0x41, 0x41, 0x41},
	{0x02, 0x04, 0x08, 0x10, 0x20},
	{0x00, 0x41, 0x41, 0x41, 0x7F},
	{0x04, 0x02, 0x01, 0x02, 0x04},
	{0x40, 0x40, 0x40, 0x40, 0x40},

	{0x00, 0x03, 0x07, 0x08, 0x00},
	{0x20, 0x54, 0x54, 0x78, 0x40},
	{0x7F, 0x28, 0x44, 0x44, 0x38},
	{0x38, 0x44, 0x44, 0x44, 0x28},
	{0x38, 0x44, 0x44, 0x28, 0x7F},
	{0x38, 0x54, 0x54, 0x54, 0x18},
	{0x00, 0x08, 0x7E, 0x09, 0x02},
	{0x18, 0xA4, 0xA4, 0x9C, 0x78},
	{0x7F, 0x08, 0x04, 0x04, 0x78},
	{0x00, 0x44, 0x7D, 0x40, 0x00},
	{0x20, 0x40, 0x40, 0x3D, 0x00},
	{0x7F, 0x10, 0x28, 0x44, 0x00},
	{0x00, 0x41, 0x7F, 0x40, 0x00},
	{0x7C, 0x04, 0x78, 0x04, 0x78},
	{0x7C, 0x08, 0x04, 0x04, 0x78},
	{0x38, 0x44, 0x44, 0x44, 0x38},

	{0xFC, 0x18, 0x24, 0x24, 0x18},
	{0x18, 0x24, 0x24, 0x18, 0xFC},
	{0x7C, 0x08, 0x04, 0x04, 0x08},
	{0x48, 0x54, 0x54, 0x54, 0x24},
	{0x04, 0x04, 0x3F, 0x44, 0x24},
	{0x3C, 0x40, 0x40, 0x20, 0x7C},
	{0x1C, 0x20, 0x40, 0x20, 0x1C},
	{0x3C, 0x40, 0x30, 0x40, 0x3C},
	{0x44, 0x28, 0x10, 0x28, 0x44},
	{0x4C, 0x90, 0x90, 0x90, 0x7C},
	{0x44, 0x64, 0x54, 0x4C, 0x44},
	{0x00, 0x08, 0x36, 0x41, 0x00},
	{0x00, 0x00, 0x77, 0x00, 0x00},
	{0x00, 0x41, 0x36, 0x08, 0x00},
	{0x02, 0x01, 0x02, 0x04, 0x02}
};
*/
/*
// ASCII 5x7 font
const uint8_t gFont5x7[96][5] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00},    // ' '
	{0x00, 0x00, 0x5F, 0x00, 0x00},
	{0x00, 0x07, 0x00, 0x07, 0x00},
	{0x14, 0x7F, 0x14, 0x7F, 0x14},
	{0x24, 0x2A, 0x7F, 0x2A, 0x12},
	{0x23, 0x13, 0x08, 0x64, 0x62},
	{0x36, 0x49, 0x56, 0x20, 0x50},
	{0x00, 0x08, 0x07, 0x03, 0x00},
	{0x00, 0x1C, 0x22, 0x41, 0x00},
	{0x00, 0x41, 0x22, 0x1C, 0x00},
	{0x2A, 0x1C, 0x7F, 0x1C, 0x2A},
	{0x08, 0x08, 0x3E, 0x08, 0x08},
	{0x00, 0x80, 0x70, 0x30, 0x00},
	{0x08, 0x08, 0x08, 0x08, 0x08},
	{0x00, 0x00, 0x60, 0x60, 0x00},
	{0x20, 0x10, 0x08, 0x04, 0x02},

	{0x3E, 0x41, 0x41, 0x41, 0x3E},    // '0'
	{0x00, 0x42, 0x7F, 0x40, 0x00},
	{0x72, 0x49, 0x49, 0x49, 0x46},
	{0x21, 0x41, 0x49, 0x4D, 0x33},
	{0x18, 0x14, 0x12, 0x7F, 0x10},
	{0x27, 0x45, 0x45, 0x45, 0x39},
	{0x3C, 0x4A, 0x49, 0x49, 0x31},
	{0x41, 0x21, 0x11, 0x09, 0x07},
	{0x36, 0x49, 0x49, 0x49, 0x36},
	{0x46, 0x49, 0x49, 0x29, 0x1E},
	{0x00, 0x00, 0x14, 0x00, 0x00},
	{0x00, 0x40, 0x34, 0x00, 0x00},
	{0x00, 0x08, 0x14, 0x22, 0x41},
	{0x14, 0x14, 0x14, 0x14, 0x14},
	{0x00, 0x41, 0x22, 0x14, 0x08},
	{0x02, 0x01, 0x59, 0x09, 0x06},

	{0x3E, 0x41, 0x5D, 0x59, 0x4E},   // '@'
	{0x7C, 0x12, 0x11, 0x12, 0x7C},   // 'A'
	{0x7F, 0x49, 0x49, 0x49, 0x36},
	{0x3E, 0x41, 0x41, 0x41, 0x22},
	{0x7F, 0x41, 0x41, 0x41, 0x3E},
	{0x7F, 0x49, 0x49, 0x49, 0x41},
	{0x7F, 0x09, 0x09, 0x09, 0x01},
	{0x3E, 0x41, 0x41, 0x51, 0x73},
	{0x7F, 0x08, 0x08, 0x08, 0x7F},
	{0x00, 0x41, 0x7F, 0x41, 0x00},
	{0x20, 0x40, 0x41, 0x3F, 0x01},
	{0x7F, 0x08, 0x14, 0x22, 0x41},
	{0x7F, 0x40, 0x40, 0x40, 0x40},
	{0x7F, 0x02, 0x1C, 0x02, 0x7F},
	{0x7F, 0x04, 0x08, 0x10, 0x7F},
	{0x3E, 0x41, 0x41, 0x41, 0x3E},

	{0x7F, 0x09, 0x09, 0x09, 0x06},
	{0x3E, 0x41, 0x51, 0x21, 0x5E},
	{0x7F, 0x09, 0x19, 0x29, 0x46},
	{0x26, 0x49, 0x49, 0x49, 0x32},
	{0x03, 0x01, 0x7F, 0x01, 0x03},
	{0x3F, 0x40, 0x40, 0x40, 0x3F},
	{0x1F, 0x20, 0x40, 0x20, 0x1F},
	{0x3F, 0x40, 0x38, 0x40, 0x3F},
	{0x63, 0x14, 0x08, 0x14, 0x63},
	{0x03, 0x04, 0x78, 0x04, 0x03},
	{0x61, 0x59, 0x49, 0x4D, 0x43},
	{0x00, 0x7F, 0x41, 0x41, 0x41},
	{0x02, 0x04, 0x08, 0x10, 0x20},
	{0x00, 0x41, 0x41, 0x41, 0x7F},
	{0x04, 0x02, 0x01, 0x02, 0x04},
	{0x40, 0x40, 0x40, 0x40, 0x40},

	{0x00, 0x03, 0x07, 0x08, 0x00},
	{0x20, 0x54, 0x54, 0x78, 0x40},
	{0x7F, 0x28, 0x44, 0x44, 0x38},
	{0x38, 0x44, 0x44, 0x44, 0x28},
	{0x38, 0x44, 0x44, 0x28, 0x7F},
	{0x38, 0x54, 0x54, 0x54, 0x18},
	{0x00, 0x08, 0x7E, 0x09, 0x02},
	{0x18, 0xA4, 0xA4, 0x9C, 0x78},
	{0x7F, 0x08, 0x04, 0x04, 0x78},
	{0x00, 0x44, 0x7D, 0x40, 0x00},
	{0x20, 0x40, 0x40, 0x3D, 0x00},
	{0x7F, 0x10, 0x28, 0x44, 0x00},
	{0x00, 0x41, 0x7F, 0x40, 0x00},
	{0x7C, 0x04, 0x78, 0x04, 0x78},
	{0x7C, 0x08, 0x04, 0x04, 0x78},
	{0x38, 0x44, 0x44, 0x44, 0x38},

	{0xFC, 0x18, 0x24, 0x24, 0x18},
	{0x18, 0x24, 0x24, 0x18, 0xFC},
	{0x7C, 0x08, 0x04, 0x04, 0x08},
	{0x48, 0x54, 0x54, 0x54, 0x24},
	{0x04, 0x04, 0x3F, 0x44, 0x24},
	{0x3C, 0x40, 0x40, 0x20, 0x7C},
	{0x1C, 0x20, 0x40, 0x20, 0x1C},
	{0x3C, 0x40, 0x30, 0x40, 0x3C},
	{0x44, 0x28, 0x10, 0x28, 0x44},
	{0x4C, 0x90, 0x90, 0x90, 0x7C},
	{0x44, 0x64, 0x54, 0x4C, 0x44},
	{0x00, 0x08, 0x36, 0x41, 0x00},
	{0x00, 0x00, 0x77, 0x00, 0x00},
	{0x00, 0x41, 0x36, 0x08, 0x00},
	{0x02, 0x01, 0x02, 0x04, 0x02},
	{0x3C, 0x26, 0x23, 0x26, 0x3C}
};
*/
const uint8_t gFont5x7[96][5] =
{
	{0x00, 0x00, 0x00, 0x00, 0x00},     // (space)
	{0x00, 0x00, 0x5F, 0x00, 0x00},     // !
	{0x00, 0x07, 0x00, 0x07, 0x00},     // "
	{0x14, 0x7F, 0x14, 0x7F, 0x14},     // #
	{0x24, 0x2A, 0x7F, 0x2A, 0x12},     // $
	{0x23, 0x13, 0x08, 0x64, 0x62},     // %
	{0x36, 0x49, 0x55, 0x22, 0x50},     // &
	{0x00, 0x05, 0x03, 0x00, 0x00},     // '
	{0x00, 0x1C, 0x22, 0x41, 0x00},     // (
	{0x00, 0x41, 0x22, 0x1C, 0x00},     // )
	{0x08, 0x2A, 0x1C, 0x2A, 0x08},     // *
	{0x08, 0x08, 0x3E, 0x08, 0x08},     // +
	{0x00, 0x50, 0x30, 0x00, 0x00},     // ,
	{0x08, 0x08, 0x08, 0x08, 0x08},     // -
	{0x00, 0x60, 0x60, 0x00, 0x00},     // .
	{0x20, 0x10, 0x08, 0x04, 0x02},     // /
	{0x3E, 0x51, 0x49, 0x45, 0x3E},     // 0
	{0x00, 0x42, 0x7F, 0x40, 0x00},     // 1
	{0x42, 0x61, 0x51, 0x49, 0x46},     // 2
	{0x21, 0x41, 0x45, 0x4B, 0x31},     // 3
	{0x18, 0x14, 0x12, 0x7F, 0x10},     // 4
	{0x27, 0x45, 0x45, 0x45, 0x39},     // 5
	{0x3C, 0x4A, 0x49, 0x49, 0x30},     // 6
	{0x01, 0x71, 0x09, 0x05, 0x03},     // 7
	{0x36, 0x49, 0x49, 0x49, 0x36},     // 8
	{0x06, 0x49, 0x49, 0x29, 0x1E},     // 9
	{0x00, 0x36, 0x36, 0x00, 0x00},     // :
	{0x00, 0x56, 0x36, 0x00, 0x00},     // ;
	{0x00, 0x08, 0x14, 0x22, 0x41},     // <
	{0x14, 0x14, 0x14, 0x14, 0x14},     // =
	{0x41, 0x22, 0x14, 0x08, 0x00},     // >
	{0x02, 0x01, 0x51, 0x09, 0x06},     // ?
	{0x32, 0x49, 0x79, 0x41, 0x3E},     // @
	{0x7E, 0x11, 0x11, 0x11, 0x7E},     // A
	{0x7F, 0x49, 0x49, 0x49, 0x36},     // B
	{0x3E, 0x41, 0x41, 0x41, 0x22},     // C
	{0x7F, 0x41, 0x41, 0x22, 0x1C},     // D
	{0x7F, 0x49, 0x49, 0x49, 0x41},     // E
	{0x7F, 0x09, 0x09, 0x01, 0x01},     // F
	{0x3E, 0x41, 0x41, 0x51, 0x32},     // G
	{0x7F, 0x08, 0x08, 0x08, 0x7F},     // H
	{0x00, 0x41, 0x7F, 0x41, 0x00},     // I
	{0x20, 0x40, 0x41, 0x3F, 0x01},     // J
	{0x7F, 0x08, 0x14, 0x22, 0x41},     // K
	{0x7F, 0x40, 0x40, 0x40, 0x40},     // L
	{0x7F, 0x02, 0x04, 0x02, 0x7F},     // M
	{0x7F, 0x04, 0x08, 0x10, 0x7F},     // N
	{0x3E, 0x41, 0x41, 0x41, 0x3E},     // O
	{0x7F, 0x09, 0x09, 0x09, 0x06},     // P
	{0x3E, 0x41, 0x51, 0x21, 0x5E},     // Q
	{0x7F, 0x09, 0x19, 0x29, 0x46},     // R
	{0x46, 0x49, 0x49, 0x49, 0x31},     // S
	{0x01, 0x01, 0x7F, 0x01, 0x01},     // T
	{0x3F, 0x40, 0x40, 0x40, 0x3F},     // U
	{0x1F, 0x20, 0x40, 0x20, 0x1F},     // V
	{0x7F, 0x20, 0x18, 0x20, 0x7F},     // W
	{0x63, 0x14, 0x08, 0x14, 0x63},     // X
	{0x03, 0x04, 0x78, 0x04, 0x03},     // Y
	{0x61, 0x51, 0x49, 0x45, 0x43},     // Z
	{0x00, 0x00, 0x7F, 0x41, 0x41},     // [
	{0x02, 0x04, 0x08, 0x10, 0x20},     // "\"
	{0x41, 0x41, 0x7F, 0x00, 0x00},     // ]
	{0x04, 0x02, 0x01, 0x02, 0x04},     // ^
	{0x40, 0x40, 0x40, 0x40, 0x40},     // _
	{0x00, 0x01, 0x02, 0x04, 0x00},     // `
	{0x20, 0x54, 0x54, 0x54, 0x78},     // a
	{0x7F, 0x48, 0x44, 0x44, 0x38},     // b
	{0x38, 0x44, 0x44, 0x44, 0x20},     // c
	{0x38, 0x44, 0x44, 0x48, 0x7F},     // d
	{0x38, 0x54, 0x54, 0x54, 0x18},     // e
	{0x08, 0x7E, 0x09, 0x01, 0x02},     // f
	{0x08, 0x14, 0x54, 0x54, 0x3C},     // g
	{0x7F, 0x08, 0x04, 0x04, 0x78},     // h
	{0x00, 0x44, 0x7D, 0x40, 0x00},     // i
	{0x20, 0x40, 0x44, 0x3D, 0x00},     // j
	{0x00, 0x7F, 0x10, 0x28, 0x44},     // k
	{0x00, 0x41, 0x7F, 0x40, 0x00},     // l
	{0x7C, 0x04, 0x18, 0x04, 0x78},     // m
	{0x7C, 0x08, 0x04, 0x04, 0x78},     // n
	{0x38, 0x44, 0x44, 0x44, 0x38},     // o
	{0x7C, 0x14, 0x14, 0x14, 0x08},     // p
	{0x08, 0x14, 0x14, 0x18, 0x7C},     // q
	{0x7C, 0x08, 0x04, 0x04, 0x08},     // r
	{0x48, 0x54, 0x54, 0x54, 0x20},     // s
	{0x04, 0x3F, 0x44, 0x40, 0x20},     // t
	{0x3C, 0x40, 0x40, 0x20, 0x7C},     // u
	{0x1C, 0x20, 0x40, 0x20, 0x1C},     // v
	{0x3C, 0x40, 0x30, 0x40, 0x3C},     // w
	{0x44, 0x28, 0x10, 0x28, 0x44},     // x
	{0x0C, 0x50, 0x50, 0x50, 0x3C},     // y
	{0x44, 0x64, 0x54, 0x4C, 0x44},     // z
	{0x00, 0x08, 0x36, 0x41, 0x00},     // {
	{0x00, 0x00, 0x7F, 0x00, 0x00},     // |
	{0x00, 0x41, 0x36, 0x08, 0x00},     // }
	{0x08, 0x08, 0x2A, 0x1C, 0x08},     // ->
	{0x08, 0x1C, 0x2A, 0x08, 0x08}      // <-
};