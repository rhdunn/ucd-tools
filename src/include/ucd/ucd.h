/* Unicode Character Database API
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

#ifndef UNICODE_CHARACTER_DATA_H
#define UNICODE_CHARACTER_DATA_H

#include <stdint.h>

#include "script.h"

#ifdef __cplusplus
extern "C"
{
#endif

/** @brief Represents a Unicode codepoint.
  */
typedef uint32_t codepoint_t;

/** @brief Unicode General Category Groups
  * @see   http://www.unicode.org/reports/tr44/
  */
typedef enum ucd_category_group_
{
	UCD_CATEGORY_GROUP_C, /**< @brief Other */
	UCD_CATEGORY_GROUP_I, /**< @brief Invalid */
	UCD_CATEGORY_GROUP_L, /**< @brief Letter */
	UCD_CATEGORY_GROUP_M, /**< @brief Mark */
	UCD_CATEGORY_GROUP_N, /**< @brief Number */
	UCD_CATEGORY_GROUP_P, /**< @brief Punctuation */
	UCD_CATEGORY_GROUP_S, /**< @brief Symbol */
	UCD_CATEGORY_GROUP_Z, /**< @brief Separator */
} ucd_category_group;

/** @brief Get a string representation of the category_group enumeration value.
  *
  * @param c The value to get the string representation for.
  *
  * @return The string representation, or "-" if the value is not recognized.
  */
const char *ucd_get_category_group_string(ucd_category_group c);

/** @brief Unicode General Category Values
  * @see   http://www.unicode.org/reports/tr44/
  */
typedef enum ucd_category_
{
	UCD_CATEGORY_Cc, /**< @brief Control Character */
	UCD_CATEGORY_Cf, /**< @brief Format Control Character */
	UCD_CATEGORY_Cn, /**< @brief Unassigned */
	UCD_CATEGORY_Co, /**< @brief Private Use */
	UCD_CATEGORY_Cs, /**< @brief Surrogate Code Point */

	UCD_CATEGORY_Ii, /**< @brief Invalid Unicode Codepoint */

	UCD_CATEGORY_Ll, /**< @brief Lower Case Letter */
	UCD_CATEGORY_Lm, /**< @brief Letter Modifier */
	UCD_CATEGORY_Lo, /**< @brief Other Letter */
	UCD_CATEGORY_Lt, /**< @brief Title Case Letter */
	UCD_CATEGORY_Lu, /**< @brief Upper Case Letter */

	UCD_CATEGORY_Mc, /**< @brief Spacing Mark */
	UCD_CATEGORY_Me, /**< @brief Enclosing Mark */
	UCD_CATEGORY_Mn, /**< @brief Non-Spacing Mark */

	UCD_CATEGORY_Nd, /**< @brief Decimal Digit */
	UCD_CATEGORY_Nl, /**< @brief Letter-Like Number */
	UCD_CATEGORY_No, /**< @brief Other Number */

	UCD_CATEGORY_Pc, /**< @brief Connector */
	UCD_CATEGORY_Pd, /**< @brief Dash/Hyphen */
	UCD_CATEGORY_Pe, /**< @brief Close Punctuation Mark */
	UCD_CATEGORY_Pf, /**< @brief Final Quotation Mark */
	UCD_CATEGORY_Pi, /**< @brief Initial Quotation Mark */
	UCD_CATEGORY_Po, /**< @brief Other */
	UCD_CATEGORY_Ps, /**< @brief Open Punctuation Mark */

	UCD_CATEGORY_Sc, /**< @brief Currency Symbol */
	UCD_CATEGORY_Sk, /**< @brief Modifier Symbol */
	UCD_CATEGORY_Sm, /**< @brief Math Symbol */
	UCD_CATEGORY_So, /**< @brief Other Symbol */

	UCD_CATEGORY_Zl, /**< @brief Line Separator */
	UCD_CATEGORY_Zp, /**< @brief Paragraph Separator */
	UCD_CATEGORY_Zs, /**< @brief Space Separator */
} ucd_category;

/** @brief Get a string representation of the category enumeration value.
  *
  * @param c The value to get the string representation for.
  *
  * @return The string representation, or "--" if the value is not recognized.
  */
const char *ucd_get_category_string(ucd_category c);

/** @brief Lookup the General Category Group for a General Category.
  *
  * @param c The General Category to lookup.
  * @return  The General Category Group of the General Category.
  */
ucd_category_group ucd_get_category_group_for_category(ucd_category c);

/** @brief Lookup the General Category Group for a Unicode codepoint.
  *
  * @param c The Unicode codepoint to lookup.
  * @return  The General Category Group of the Unicode codepoint.
  */
ucd_category_group ucd_lookup_category_group(codepoint_t c);

/** @brief Lookup the General Category for a Unicode codepoint.
  *
  * @param c The Unicode codepoint to lookup.
  * @return  The General Category of the Unicode codepoint.
  */
ucd_category ucd_lookup_category(codepoint_t c);

/** @brief Get a string representation of the script enumeration value.
  *
  * @param s The value to get the string representation for.
  *
  * @return The string representation, or "----" if the value is not recognized.
  */
const char *ucd_get_script_string(ucd_script s);

/** @brief Lookup the Script for a Unicode codepoint.
  *
  * @param c The Unicode codepoint to lookup.
  * @return  The Script of the Unicode codepoint.
  */
ucd_script ucd_lookup_script(codepoint_t c);

/** @brief Properties
 */
typedef uint64_t ucd_property;

#define UCD_PROPERTY_WHITE_SPACE                        0x0000000000000001ull /**< @brief White_Space */
#define UCD_PROPERTY_BIDI_CONTROL                       0x0000000000000002ull /**< @brief Bidi_Control */
#define UCD_PROPERTY_JOIN_CONTROL                       0x0000000000000004ull /**< @brief Join_Control */
#define UCD_PROPERTY_DASH                               0x0000000000000008ull /**< @brief Dash */
#define UCD_PROPERTY_HYPHEN                             0x0000000000000010ull /**< @brief Hyphen */
#define UCD_PROPERTY_QUOTATION_MARK                     0x0000000000000020ull /**< @brief Quotation_Mark */
#define UCD_PROPERTY_TERMINAL_PUNCTUATION               0x0000000000000040ull /**< @brief Terminal_Punctuation */
#define UCD_PROPERTY_OTHER_MATH                         0x0000000000000080ull /**< @brief Other_Math */
#define UCD_PROPERTY_HEX_DIGIT                          0x0000000000000100ull /**< @brief Hex_Digit */
#define UCD_PROPERTY_ASCII_HEX_DIGIT                    0x0000000000000200ull /**< @brief ASCII_Hex_Digit */
#define UCD_PROPERTY_OTHER_ALPHABETIC                   0x0000000000000400ull /**< @brief Other_Alphabetic */
#define UCD_PROPERTY_IDEOGRAPHIC                        0x0000000000000800ull /**< @brief Ideographic */
#define UCD_PROPERTY_DIACRITIC                          0x0000000000001000ull /**< @brief Diacritic */
#define UCD_PROPERTY_EXTENDER                           0x0000000000002000ull /**< @brief Extender */
#define UCD_PROPERTY_OTHER_LOWERCASE                    0x0000000000004000ull /**< @brief Other_Lowercase */
#define UCD_PROPERTY_OTHER_UPPERCASE                    0x0000000000008000ull /**< @brief Other_Uppercase */
#define UCD_PROPERTY_NONCHARACTER_CODE_POINT            0x0000000000010000ull /**< @brief Noncharacter_Code_Point */
#define UCD_PROPERTY_OTHER_GRAPHEME_EXTEND              0x0000000000020000ull /**< @brief Other_Grapheme_Extend */
#define UCD_PROPERTY_IDS_BINARY_OPERATOR                0x0000000000040000ull /**< @brief IDS_Binary_Operator */
#define UCD_PROPERTY_IDS_TRINARY_OPERATOR               0x0000000000080000ull /**< @brief IDS_Trinary_Operator */
#define UCD_PROPERTY_RADICAL                            0x0000000000100000ull /**< @brief Radical */
#define UCD_PROPERTY_UNIFIED_IDEOGRAPH                  0x0000000000200000ull /**< @brief Unified_Ideograph */
#define UCD_PROPERTY_OTHER_DEFAULT_IGNORABLE_CODE_POINT 0x0000000000400000ull /**< @brief Other_Default_Ignorable_Code_Point */
#define UCD_PROPERTY_DEPRECATED                         0x0000000000800000ull /**< @brief Deprecated */
#define UCD_PROPERTY_SOFT_DOTTED                        0x0000000001000000ull /**< @brief Soft_Dotted */
#define UCD_PROPERTY_LOGICAL_ORDER_EXCEPTION            0x0000000002000000ull /**< @brief Logical_Order_Exception */
#define UCD_PROPERTY_OTHER_ID_START                     0x0000000004000000ull /**< @brief Other_ID_Start */
#define UCD_PROPERTY_OTHER_ID_CONTINUE                  0x0000000008000000ull /**< @brief Other_ID_Continue */
#define UCD_PROPERTY_SENTENCE_TERMINAL                  0x0000000010000000ull /**< @brief Sentence_Terminal */
#define UCD_PROPERTY_VARIATION_SELECTOR                 0x0000000020000000ull /**< @brief Variation_Selector */
#define UCD_PROPERTY_PATTERN_WHITE_SPACE                0x0000000040000000ull /**< @brief Pattern_White_Space */
#define UCD_PROPERTY_PATTERN_SYNTAX                     0x0000000080000000ull /**< @brief Pattern_Syntax */
#define UCD_PROPERTY_PREPENDED_CONCATENATION_MARK       0x0000000100000000ull /**< @brief Prepended_Concatenation_Mark */
#define UCD_PROPERTY_EMOJI                              0x0000000200000000ull /**< @brief Emoji */
#define UCD_PROPERTY_EMOJI_PRESENTATION                 0x0000000400000000ull /**< @brief Emoji_Presentation */
#define UCD_PROPERTY_EMOJI_MODIFIER                     0x0000000800000000ull /**< @brief Emoji_Modifier */
#define UCD_PROPERTY_EMOJI_MODIFIER_BASE                0x0000001000000000ull /**< @brief Emoji_Modifier_Base */
#define UCD_PROPERTY_REGIONAL_INDICATOR                 0x0000002000000000ull /**< @brief Regional_Indicator */
#define UCD_PROPERTY_EMOJI_COMPONENT                    0x0000004000000000ull /**< @brief Emoji_Component */
#define UCD_PROPERTY_EXTENDED_PICTOGRAPHIC              0x0000008000000000ull /**< @brief Extended_Pictographic */

/** @brief Return the properties of the specified codepoint.
 *
 * @param c        The Unicode codepoint to lookup.
 * @param category The General Category of the codepoint.
 * @return         The properties associated with the codepoint.
 */
ucd_property ucd_properties(codepoint_t c, ucd_category category);

/** @brief Is the codepoint in the 'alnum' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'alnum' class, zero otherwise.
  */
int ucd_isalnum(codepoint_t c);

/** @brief Is the codepoint in the 'alpha' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'alpha' class, zero otherwise.
  */
int ucd_isalpha(codepoint_t c);

/** @brief Is the codepoint in the 'blank' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'blank' class, zero otherwise.
  */
int ucd_isblank(codepoint_t c);

/** @brief Is the codepoint in the 'cntrl' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'cntrl' class, zero otherwise.
  */
int ucd_iscntrl(codepoint_t c);

/** @brief Is the codepoint in the 'digit' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'digit' class, zero otherwise.
  */
int ucd_isdigit(codepoint_t c);

/** @brief Is the codepoint in the 'graph' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'graph' class, zero otherwise.
  */
int ucd_isgraph(codepoint_t c);

/** @brief Is the codepoint in the 'lower' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'lower' class, zero otherwise.
  */
int ucd_islower(codepoint_t c);

/** @brief Is the codepoint in the 'print' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'print' class, zero otherwise.
  */
int ucd_isprint(codepoint_t c);

/** @brief Is the codepoint in the 'punct' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'punct' class, zero otherwise.
  */
int ucd_ispunct(codepoint_t c);

/** @brief Is the codepoint in the 'space' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'space' class, zero otherwise.
  */
int ucd_isspace(codepoint_t c);

/** @brief Is the codepoint in the 'upper' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'upper' class, zero otherwise.
  */
int ucd_isupper(codepoint_t c);

/** @brief Is the codepoint in the 'xdigit' class?
  *
  * @param c The Unicode codepoint to check.
  * @return  Non-zero if the codepoint is in the 'xdigit' class, zero otherwise.
  */
int ucd_isxdigit(codepoint_t c);

/** @brief Convert the Unicode codepoint to upper-case.
  *
  * This function only uses the simple case mapping present in the
  * UnicodeData file. The data in SpecialCasing requires Unicode
  * codepoints to be mapped to multiple codepoints.
  *
  * @param c The Unicode codepoint to convert.
  * @return  The upper-case Unicode codepoint for this codepoint, or
  *          this codepoint if there is no upper-case codepoint.
  */
codepoint_t ucd_toupper(codepoint_t c);

/** @brief Convert the Unicode codepoint to lower-case.
  *
  * This function only uses the simple case mapping present in the
  * UnicodeData file. The data in SpecialCasing requires Unicode
  * codepoints to be mapped to multiple codepoints.
  *
  * @param c The Unicode codepoint to convert.
  * @return  The lower-case Unicode codepoint for this codepoint, or
  *          this codepoint if there is no upper-case codepoint.
  */
codepoint_t ucd_tolower(codepoint_t c);

/** @brief Convert the Unicode codepoint to title-case.
  *
  * This function only uses the simple case mapping present in the
  * UnicodeData file. The data in SpecialCasing requires Unicode
  * codepoints to be mapped to multiple codepoints.
  *
  * @param c The Unicode codepoint to convert.
  * @return  The title-case Unicode codepoint for this codepoint, or
  *          this codepoint if there is no upper-case codepoint.
  */
codepoint_t ucd_totitle(codepoint_t c);

#ifdef __cplusplus
}

/** @brief Unicode Character Database
  */
namespace ucd
{
	/** @brief Represents a Unicode codepoint.
	  */
	using ::codepoint_t;

	/** @brief Unicode General Category Groups
	  * @see   http://www.unicode.org/reports/tr44/
	  */
	enum category_group
	{
		C = UCD_CATEGORY_GROUP_C, /**< @brief Other */
		I = UCD_CATEGORY_GROUP_I, /**< @brief Invalid */
		L = UCD_CATEGORY_GROUP_L, /**< @brief Letter */
		M = UCD_CATEGORY_GROUP_M, /**< @brief Mark */
		N = UCD_CATEGORY_GROUP_N, /**< @brief Number */
		P = UCD_CATEGORY_GROUP_P, /**< @brief Punctuation */
		S = UCD_CATEGORY_GROUP_S, /**< @brief Symbol */
		Z = UCD_CATEGORY_GROUP_Z, /**< @brief Separator */
	};

	/** @brief Get a string representation of the category_group enumeration value.
	  *
	  * @param c The value to get the string representation for.
	  *
	  * @return The string representation, or "-" if the value is not recognized.
	  */
	inline const char *get_category_group_string(category_group c)
	{
		return ucd_get_category_group_string((ucd_category_group)c);
	}

	/** @brief Unicode General Category Values
	  * @see   http://www.unicode.org/reports/tr44/
	  */
	enum category
	{
		Cc = UCD_CATEGORY_Cc, /**< @brief Control Character */
		Cf = UCD_CATEGORY_Cf, /**< @brief Format Control Character */
		Cn = UCD_CATEGORY_Cn, /**< @brief Unassigned */
		Co = UCD_CATEGORY_Co, /**< @brief Private Use */
		Cs = UCD_CATEGORY_Cs, /**< @brief Surrogate Code Point */

		Ii = UCD_CATEGORY_Ii, /**< @brief Invalid Unicode Codepoint */

		Ll = UCD_CATEGORY_Ll, /**< @brief Lower Case Letter */
		Lm = UCD_CATEGORY_Lm, /**< @brief Letter Modifier */
		Lo = UCD_CATEGORY_Lo, /**< @brief Other Letter */
		Lt = UCD_CATEGORY_Lt, /**< @brief Title Case Letter */
		Lu = UCD_CATEGORY_Lu, /**< @brief Upper Case Letter */

		Mc = UCD_CATEGORY_Mc, /**< @brief Spacing Mark */
		Me = UCD_CATEGORY_Me, /**< @brief Enclosing Mark */
		Mn = UCD_CATEGORY_Mn, /**< @brief Non-Spacing Mark */

		Nd = UCD_CATEGORY_Nd, /**< @brief Decimal Digit */
		Nl = UCD_CATEGORY_Nl, /**< @brief Letter-Like Number */
		No = UCD_CATEGORY_No, /**< @brief Other Number */

		Pc = UCD_CATEGORY_Pc, /**< @brief Connector */
		Pd = UCD_CATEGORY_Pd, /**< @brief Dash/Hyphen */
		Pe = UCD_CATEGORY_Pe, /**< @brief Close Punctuation Mark */
		Pf = UCD_CATEGORY_Pf, /**< @brief Final Quotation Mark */
		Pi = UCD_CATEGORY_Pi, /**< @brief Initial Quotation Mark */
		Po = UCD_CATEGORY_Po, /**< @brief Other */
		Ps = UCD_CATEGORY_Ps, /**< @brief Open Punctuation Mark */

		Sc = UCD_CATEGORY_Sc, /**< @brief Currency Symbol */
		Sk = UCD_CATEGORY_Sk, /**< @brief Modifier Symbol */
		Sm = UCD_CATEGORY_Sm, /**< @brief Math Symbol */
		So = UCD_CATEGORY_So, /**< @brief Other Symbol */

		Zl = UCD_CATEGORY_Zl, /**< @brief Line Separator */
		Zp = UCD_CATEGORY_Zp, /**< @brief Paragraph Separator */
		Zs = UCD_CATEGORY_Zs, /**< @brief Space Separator */
	};

	/** @brief Get a string representation of the category enumeration value.
	  *
	  * @param c The value to get the string representation for.
	  *
	  * @return The string representation, or "--" if the value is not recognized.
	  */
	inline const char *get_category_string(category c)
	{
		return ucd_get_category_string((ucd_category)c);
	}

	/** @brief Lookup the General Category Group for a General Category.
	  *
	  * @param c The General Category to lookup.
	  * @return  The General Category Group of the General Category.
	  */
	inline category_group lookup_category_group(category c)
	{
		return (category_group)ucd_get_category_group_for_category((ucd_category)c);
	}

	/** @brief Lookup the General Category Group for a Unicode codepoint.
	  *
	  * @param c The Unicode codepoint to lookup.
	  * @return  The General Category Group of the Unicode codepoint.
	  */
	inline category_group lookup_category_group(codepoint_t c)
	{
		return (category_group)ucd_lookup_category_group(c);
	}

	/** @brief Lookup the General Category for a Unicode codepoint.
	  *
	  * @param c The Unicode codepoint to lookup.
	  * @return  The General Category of the Unicode codepoint.
	  */
	inline category lookup_category(codepoint_t c)
	{
		return (category)ucd_lookup_category(c);
	}

	/** @brief Get a string representation of the script enumeration value.
	  *
	  * @param s The value to get the string representation for.
	  *
	  * @return The string representation, or "----" if the value is not recognized.
	  */
	inline const char *get_script_string(script s)
	{
		return ucd_get_script_string((ucd_script)s);
	}

	/** @brief Lookup the Script for a Unicode codepoint.
	  *
	  * @param c The Unicode codepoint to lookup.
	  * @return  The Script of the Unicode codepoint.
	  */
	inline script lookup_script(codepoint_t c)
	{
		return (script)ucd_lookup_script(c);
	}

	/** @brief Properties
	 */
	typedef ucd_property property;
	enum
	{
		White_Space = UCD_PROPERTY_WHITE_SPACE, /**< @brief White_Space */
		Bidi_Control = UCD_PROPERTY_BIDI_CONTROL, /**< @brief Bidi_Control */
		Join_Control = UCD_PROPERTY_JOIN_CONTROL, /**< @brief Join_Control */
		Dash = UCD_PROPERTY_DASH, /**< @brief Dash */
		Hyphen = UCD_PROPERTY_HYPHEN, /**< @brief Hyphen */
		Quotation_Mark = UCD_PROPERTY_QUOTATION_MARK, /**< @brief Quotation_Mark */
		Terminal_Punctuation = UCD_PROPERTY_TERMINAL_PUNCTUATION, /**< @brief Terminal_Punctuation */
		Other_Math = UCD_PROPERTY_OTHER_MATH, /**< @brief Other_Math */
		Hex_Digit = UCD_PROPERTY_HEX_DIGIT, /**< @brief Hex_Digit */
		ASCII_Hex_Digit = UCD_PROPERTY_ASCII_HEX_DIGIT, /**< @brief ASCII_Hex_Digit */
		Other_Alphabetic = UCD_PROPERTY_OTHER_ALPHABETIC, /**< @brief Other_Alphabetic */
		Ideographic = UCD_PROPERTY_IDEOGRAPHIC, /**< @brief Ideographic */
		Diacritic = UCD_PROPERTY_DIACRITIC, /**< @brief Diacritic */
		Extender = UCD_PROPERTY_EXTENDER, /**< @brief Extender */
		Other_Lowercase = UCD_PROPERTY_OTHER_LOWERCASE, /**< @brief Other_Lowercase */
		Other_Uppercase = UCD_PROPERTY_OTHER_UPPERCASE, /**< @brief Other_Uppercase */
		Noncharacter_Code_Point = UCD_PROPERTY_NONCHARACTER_CODE_POINT, /**< @brief Noncharacter_Code_Point */
		Other_Grapheme_Extend = UCD_PROPERTY_OTHER_GRAPHEME_EXTEND, /**< @brief Other_Grapheme_Extend */
		IDS_Binary_Operator = UCD_PROPERTY_IDS_BINARY_OPERATOR, /**< @brief IDS_Binary_Operator */
		IDS_Trinary_Operator = UCD_PROPERTY_IDS_TRINARY_OPERATOR, /**< @brief IDS_Trinary_Operator */
		Radical = UCD_PROPERTY_RADICAL, /**< @brief Radical */
		Unified_Ideograph = UCD_PROPERTY_UNIFIED_IDEOGRAPH, /**< @brief Unified_Ideograph */
		Other_Default_Ignorable_Code_Point = UCD_PROPERTY_OTHER_DEFAULT_IGNORABLE_CODE_POINT, /**< @brief Other_Default_Ignorable_Code_Point */
		Deprecated = UCD_PROPERTY_DEPRECATED, /**< @brief Deprecated */
		Soft_Dotted = UCD_PROPERTY_SOFT_DOTTED, /**< @brief Soft_Dotted */
		Logical_Order_Exception = UCD_PROPERTY_LOGICAL_ORDER_EXCEPTION, /**< @brief Logical_Order_Exception */
		Other_ID_Start = UCD_PROPERTY_OTHER_ID_START, /**< @brief Other_ID_Start */
		Other_ID_Continue = UCD_PROPERTY_OTHER_ID_CONTINUE, /**< @brief Other_ID_Continue */
		Sentence_Terminal = UCD_PROPERTY_SENTENCE_TERMINAL, /**< @brief Sentence_Terminal */
		Variation_Selector = UCD_PROPERTY_VARIATION_SELECTOR, /**< @brief Variation_Selector */
		Pattern_White_Space = UCD_PROPERTY_PATTERN_WHITE_SPACE, /**< @brief Pattern_White_Space */
		Pattern_Syntax = UCD_PROPERTY_PATTERN_SYNTAX, /**< @brief Pattern_Syntax */
		Prepended_Concatenation_Mark = UCD_PROPERTY_PREPENDED_CONCATENATION_MARK, /**< @brief Prepended_Concatenation_Mark */
		Emoji = UCD_PROPERTY_EMOJI, /**< @brief Emoji */
		Emoji_Presentation = UCD_PROPERTY_EMOJI_PRESENTATION, /**< @brief Emoji_Presentation */
		Emoji_Modifier = UCD_PROPERTY_EMOJI_MODIFIER, /**< @brief Emoji_Modifier */
		Emoji_Modifier_Base = UCD_PROPERTY_EMOJI_MODIFIER_BASE, /**< @brief Emoji_Modifier_Base */
		Regional_Indicator = UCD_PROPERTY_REGIONAL_INDICATOR, /**< @brief Regional_Indicator */
		Emoji_Component = UCD_PROPERTY_EMOJI_COMPONENT, /**< @brief Emoji_Component */
		Extended_Pictographic = UCD_PROPERTY_EXTENDED_PICTOGRAPHIC, /**< @brief Extended_Pictographic */
	};

	/** @brief Return the properties of the specified codepoint.
	 *
	 * @param c   The Unicode codepoint to lookup.
	 * @param cat The General Category of the codepoint.
	 * @return    The properties associated with the codepoint.
	 */
	inline property properties(codepoint_t c, category cat)
	{
		return (property)ucd_properties(c, (ucd_category)cat);
	}

	/** @brief Is the codepoint in the 'alnum' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'alnum' class, zero otherwise.
	  */
	inline int isalnum(codepoint_t c)
	{
		return ucd_isalnum(c);
	}

	/** @brief Is the codepoint in the 'alpha' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'alpha' class, zero otherwise.
	  */
	inline int isalpha(codepoint_t c)
	{
		return ucd_isalpha(c);
	}

	/** @brief Is the codepoint in the 'blank' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'blank' class, zero otherwise.
	  */
	inline int isblank(codepoint_t c)
	{
		return ucd_isblank(c);
	}

	/** @brief Is the codepoint in the 'cntrl' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'cntrl' class, zero otherwise.
	  */
	inline int iscntrl(codepoint_t c)
	{
		return ucd_iscntrl(c);
	}

	/** @brief Is the codepoint in the 'digit' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'digit' class, zero otherwise.
	  */
	inline int isdigit(codepoint_t c)
	{
		return ucd_isdigit(c);
	}

	/** @brief Is the codepoint in the 'graph' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'graph' class, zero otherwise.
	  */
	inline int isgraph(codepoint_t c)
	{
		return ucd_isgraph(c);
	}

	/** @brief Is the codepoint in the 'lower' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'lower' class, zero otherwise.
	  */
	inline int islower(codepoint_t c)
	{
		return ucd_islower(c);
	}

	/** @brief Is the codepoint in the 'print' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'print' class, zero otherwise.
	  */
	inline int isprint(codepoint_t c)
	{
		return ucd_isprint(c);
	}

	/** @brief Is the codepoint in the 'punct' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'punct' class, zero otherwise.
	  */
	inline int ispunct(codepoint_t c)
	{
		return ucd_ispunct(c);
	}

	/** @brief Is the codepoint in the 'space' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'space' class, zero otherwise.
	  */
	inline int isspace(codepoint_t c)
	{
		return ucd_isspace(c);
	}

	/** @brief Is the codepoint in the 'upper' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'upper' class, zero otherwise.
	  */
	inline int isupper(codepoint_t c)
	{
		return ucd_isupper(c);
	}

	/** @brief Is the codepoint in the 'xdigit' class?
	  *
	  * @param c The Unicode codepoint to check.
	  * @return  Non-zero if the codepoint is in the 'xdigit' class, zero otherwise.
	  */
	inline int isxdigit(codepoint_t c)
	{
		return ucd_isxdigit(c);
	}

	/** @brief Convert the Unicode codepoint to upper-case.
	  *
	  * This function only uses the simple case mapping present in the
	  * UnicodeData file. The data in SpecialCasing requires Unicode
	  * codepoints to be mapped to multiple codepoints.
	  *
	  * @param c The Unicode codepoint to convert.
	  * @return  The upper-case Unicode codepoint for this codepoint, or
	  *          this codepoint if there is no upper-case codepoint.
	  */
	inline codepoint_t toupper(codepoint_t c)
	{
		return ucd_toupper(c);
	}

	/** @brief Convert the Unicode codepoint to lower-case.
	  *
	  * This function only uses the simple case mapping present in the
	  * UnicodeData file. The data in SpecialCasing requires Unicode
	  * codepoints to be mapped to multiple codepoints.
	  *
	  * @param c The Unicode codepoint to convert.
	  * @return  The lower-case Unicode codepoint for this codepoint, or
	  *          this codepoint if there is no upper-case codepoint.
	  */
	inline codepoint_t tolower(codepoint_t c)
	{
		return ucd_tolower(c);
	}

	/** @brief Convert the Unicode codepoint to title-case.
	  *
	  * This function only uses the simple case mapping present in the
	  * UnicodeData file. The data in SpecialCasing requires Unicode
	  * codepoints to be mapped to multiple codepoints.
	  *
	  * @param c The Unicode codepoint to convert.
	  * @return  The title-case Unicode codepoint for this codepoint, or
	  *          this codepoint if there is no upper-case codepoint.
	  */
	inline codepoint_t totitle(codepoint_t c)
	{
		return ucd_totitle(c);
	}
}
#endif

#endif
