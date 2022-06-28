/*
 *  Copyright (C) 2022, w212 research. <contact@w212research.com>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of version 2 of the GNU General Public License as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include "XParse.hpp"
#include <cstdint>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream f(NORMAL_TEST_ELF_PATH, ios::binary);
	vector<uint8_t> buf(istreambuf_iterator<char>(f), {});
	XParse::format_t format;

	f.close();

	format = XParse::detect_format(buf);
	printf("%d\n", format);

	return 0;
}