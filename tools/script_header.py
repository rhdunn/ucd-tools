#!/usr/bin/python

# Copyright (C) 2021 Reece H. Dunn
#
# This file is part of ucd-tools.
#
# ucd-tools is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# ucd-tools is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with ucd-tools.  If not, see <http://www.gnu.org/licenses/>.

import os
import sys
import ucd

ucd_rootdir = sys.argv[1]
ucd_version = sys.argv[2]

if __name__ == '__main__':
	sys.stdout.write("""/* Unicode Character Database API : Script Codes
 *
 * Copyright (C) 2012-2018, 2021 Reece H. Dunn
 *
 * This file is part of ucd-tools.
 *
 * ucd-tools is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ucd-tools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ucd-tools.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UNICODE_CHARACTER_DATA_SCRIPTS_H
#define UNICODE_CHARACTER_DATA_SCRIPTS_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

/** @brief Unicode Script
  * @see   http://www.iana.org/assignments/language-subtag-registry
  * @see   http://www.unicode.org/iso15924/iso15924-codes.html
  */
typedef enum ucd_script_
{
""")
	script_names = ucd.parse_property_mapping(ucd_rootdir, 'sc')
	for (script, name) in sorted(script_names.items()):
		sys.stdout.write("""	UCD_SCRIPT_%s, /**< @brief %s Script */
""" % (script, name.replace('_', ' ')))
	sys.stdout.write("""
} ucd_script;

#ifdef __cplusplus
}

/** @brief Unicode Character Database
  */
namespace ucd
{
	/** @brief Unicode Script
	  * @see   http://www.iana.org/assignments/language-subtag-registry
	  * @see   http://www.unicode.org/iso15924/iso15924-codes.html
	  */
	enum script
	{""")
	script_names = ucd.parse_property_mapping(ucd_rootdir, 'sc')
	for (script, name) in sorted(script_names.items()):
		sys.stdout.write("""		%s = UCD_SCRIPT_%s, /**< @brief %s Script */
""" % (script, script, name.replace('_', ' ')))
	sys.stdout.write("""
	};
}
#endif

#endif
""")
