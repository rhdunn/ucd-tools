/* Unicode Character Database API : Script Codes
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
	UCD_SCRIPT_Adlm, /**< @brief Adlam Script */
	UCD_SCRIPT_Afak, /**< @brief Afaka Script */
	UCD_SCRIPT_Aghb, /**< @brief Caucasian Albanian Script */
	UCD_SCRIPT_Ahom, /**< @brief Ahom Script */
	UCD_SCRIPT_Arab, /**< @brief Arabic Script */
	UCD_SCRIPT_Armi, /**< @brief Imperial Aramaic Script */
	UCD_SCRIPT_Armn, /**< @brief Armenian Script */
	UCD_SCRIPT_Avst, /**< @brief Avestan Script */
	UCD_SCRIPT_Bali, /**< @brief Balinese Script */
	UCD_SCRIPT_Bamu, /**< @brief Bamum Script */
	UCD_SCRIPT_Bass, /**< @brief Bassa Vah Script */
	UCD_SCRIPT_Batk, /**< @brief Batak Script */
	UCD_SCRIPT_Beng, /**< @brief Bengali Script */
	UCD_SCRIPT_Bhks, /**< @brief Bhaiksuki Script */
	UCD_SCRIPT_Blis, /**< @brief Blissymbols Script */
	UCD_SCRIPT_Bopo, /**< @brief Bopomofo Script */
	UCD_SCRIPT_Brah, /**< @brief Brahmi Script */
	UCD_SCRIPT_Brai, /**< @brief Braille Script */
	UCD_SCRIPT_Bugi, /**< @brief Buginese Script */
	UCD_SCRIPT_Buhd, /**< @brief Buhid Script */
	UCD_SCRIPT_Cakm, /**< @brief Chakma Script */
	UCD_SCRIPT_Cans, /**< @brief Canadian Aboriginal Script */
	UCD_SCRIPT_Cari, /**< @brief Carian Script */
	UCD_SCRIPT_Cham, /**< @brief Cham Script */
	UCD_SCRIPT_Cher, /**< @brief Cherokee Script */
	UCD_SCRIPT_Cirt, /**< @brief Cirth Script */
	UCD_SCRIPT_Copt, /**< @brief Coptic Script */
	UCD_SCRIPT_Cprt, /**< @brief Cypriot Script */
	UCD_SCRIPT_Cyrl, /**< @brief Cyrillic Script */
	UCD_SCRIPT_Cyrs, /**< @brief Cyrillic (Old Church Slavonic variant) Script */
	UCD_SCRIPT_Deva, /**< @brief Devanagari Script */
	UCD_SCRIPT_Dogr, /**< @brief Dogra Script */
	UCD_SCRIPT_Dsrt, /**< @brief Deseret Script */
	UCD_SCRIPT_Dupl, /**< @brief Duployan Script */
	UCD_SCRIPT_Egyd, /**< @brief Egyptian demotic Script */
	UCD_SCRIPT_Egyh, /**< @brief Egyptian hieratic Script */
	UCD_SCRIPT_Egyp, /**< @brief Egyptian Hieroglyphs Script */
	UCD_SCRIPT_Elba, /**< @brief Elbasan Script */
	UCD_SCRIPT_Ethi, /**< @brief Ethiopic Script */
	UCD_SCRIPT_Geok, /**< @brief Khutsuri (Asomtavruli and Nuskhuri) Script */
	UCD_SCRIPT_Geor, /**< @brief Georgian Script */
	UCD_SCRIPT_Glag, /**< @brief Glagolitic Script */
	UCD_SCRIPT_Gong, /**< @brief Gunjala Gondi Script */
	UCD_SCRIPT_Gonm, /**< @brief Masaram Gondi Script */
	UCD_SCRIPT_Goth, /**< @brief Gothic Script */
	UCD_SCRIPT_Gran, /**< @brief Grantha Script */
	UCD_SCRIPT_Grek, /**< @brief Greek Script */
	UCD_SCRIPT_Gujr, /**< @brief Gujarati Script */
	UCD_SCRIPT_Guru, /**< @brief Gurmukhi Script */
	UCD_SCRIPT_Hang, /**< @brief Hangul Script */
	UCD_SCRIPT_Hani, /**< @brief Han Script */
	UCD_SCRIPT_Hano, /**< @brief Hanunoo Script */
	UCD_SCRIPT_Hans, /**< @brief Han (Simplified variant) Script */
	UCD_SCRIPT_Hant, /**< @brief Han (Traditional variant) Script */
	UCD_SCRIPT_Hatr, /**< @brief Hatran Script */
	UCD_SCRIPT_Hebr, /**< @brief Hebrew Script */
	UCD_SCRIPT_Hira, /**< @brief Hiragana Script */
	UCD_SCRIPT_Hluw, /**< @brief Anatolian Hieroglyphs Script */
	UCD_SCRIPT_Hmng, /**< @brief Pahawh Hmong Script */
	UCD_SCRIPT_Hrkt, /**< @brief Katakana Or Hiragana Script */
	UCD_SCRIPT_Hung, /**< @brief Old Hungarian Script */
	UCD_SCRIPT_Inds, /**< @brief Indus (Harappan) Script */
	UCD_SCRIPT_Ital, /**< @brief Old Italic Script */
	UCD_SCRIPT_Java, /**< @brief Javanese Script */
	UCD_SCRIPT_Jpan, /**< @brief Japanese (alias for Han + Hiragana + Katakana) Script */
	UCD_SCRIPT_Jurc, /**< @brief Jurchen Script */
	UCD_SCRIPT_Kali, /**< @brief Kayah Li Script */
	UCD_SCRIPT_Kana, /**< @brief Katakana Script */
	UCD_SCRIPT_Khar, /**< @brief Kharoshthi Script */
	UCD_SCRIPT_Khmr, /**< @brief Khmer Script */
	UCD_SCRIPT_Khoj, /**< @brief Khojki Script */
	UCD_SCRIPT_Knda, /**< @brief Kannada Script */
	UCD_SCRIPT_Kore, /**< @brief Korean (alias for Hangul + Han) Script */
	UCD_SCRIPT_Kpel, /**< @brief Kpelle Script */
	UCD_SCRIPT_Kthi, /**< @brief Kaithi Script */
	UCD_SCRIPT_Lana, /**< @brief Tai Tham Script */
	UCD_SCRIPT_Laoo, /**< @brief Lao Script */
	UCD_SCRIPT_Latf, /**< @brief Latin (Fraktur variant) Script */
	UCD_SCRIPT_Latg, /**< @brief Latin (Gothic variant) Script */
	UCD_SCRIPT_Latn, /**< @brief Latin Script */
	UCD_SCRIPT_Lepc, /**< @brief Lepcha Script */
	UCD_SCRIPT_Limb, /**< @brief Limbu Script */
	UCD_SCRIPT_Lina, /**< @brief Linear A Script */
	UCD_SCRIPT_Linb, /**< @brief Linear B Script */
	UCD_SCRIPT_Lisu, /**< @brief Lisu Script */
	UCD_SCRIPT_Loma, /**< @brief Loma Script */
	UCD_SCRIPT_Lyci, /**< @brief Lycian Script */
	UCD_SCRIPT_Lydi, /**< @brief Lydian Script */
	UCD_SCRIPT_Mahj, /**< @brief Mahajani Script */
	UCD_SCRIPT_Maka, /**< @brief Makasar Script */
	UCD_SCRIPT_Mand, /**< @brief Mandaic Script */
	UCD_SCRIPT_Mani, /**< @brief Manichaean Script */
	UCD_SCRIPT_Marc, /**< @brief Marchen Script */
	UCD_SCRIPT_Maya, /**< @brief Mayan hieroglyphs Script */
	UCD_SCRIPT_Medf, /**< @brief Medefaidrin Script */
	UCD_SCRIPT_Mend, /**< @brief Mende Kikakui Script */
	UCD_SCRIPT_Merc, /**< @brief Meroitic Cursive Script */
	UCD_SCRIPT_Mero, /**< @brief Meroitic Hieroglyphs Script */
	UCD_SCRIPT_Mlym, /**< @brief Malayalam Script */
	UCD_SCRIPT_Modi, /**< @brief Modi Script */
	UCD_SCRIPT_Mong, /**< @brief Mongolian Script */
	UCD_SCRIPT_Moon, /**< @brief Moon (Moon code, Moon script, Moon type) Script */
	UCD_SCRIPT_Mroo, /**< @brief Mro Script */
	UCD_SCRIPT_Mtei, /**< @brief Meetei Mayek Script */
	UCD_SCRIPT_Mult, /**< @brief Multani Script */
	UCD_SCRIPT_Mymr, /**< @brief Myanmar Script */
	UCD_SCRIPT_Narb, /**< @brief Old North Arabian Script */
	UCD_SCRIPT_Nbat, /**< @brief Nabataean Script */
	UCD_SCRIPT_Newa, /**< @brief Newa Script */
	UCD_SCRIPT_Nkgb, /**< @brief Naxi Geba Script */
	UCD_SCRIPT_Nkoo, /**< @brief Nko Script */
	UCD_SCRIPT_Nshu, /**< @brief Nushu Script */
	UCD_SCRIPT_Ogam, /**< @brief Ogham Script */
	UCD_SCRIPT_Olck, /**< @brief Ol Chiki Script */
	UCD_SCRIPT_Orkh, /**< @brief Old Turkic Script */
	UCD_SCRIPT_Orya, /**< @brief Oriya Script */
	UCD_SCRIPT_Osge, /**< @brief Osage Script */
	UCD_SCRIPT_Osma, /**< @brief Osmanya Script */
	UCD_SCRIPT_Palm, /**< @brief Palmyrene Script */
	UCD_SCRIPT_Pauc, /**< @brief Pau Cin Hau Script */
	UCD_SCRIPT_Perm, /**< @brief Old Permic Script */
	UCD_SCRIPT_Phag, /**< @brief Phags Pa Script */
	UCD_SCRIPT_Phli, /**< @brief Inscriptional Pahlavi Script */
	UCD_SCRIPT_Phlp, /**< @brief Psalter Pahlavi Script */
	UCD_SCRIPT_Phlv, /**< @brief Book Pahlavi Script */
	UCD_SCRIPT_Phnx, /**< @brief Phoenician Script */
	UCD_SCRIPT_Plrd, /**< @brief Miao Script */
	UCD_SCRIPT_Prti, /**< @brief Inscriptional Parthian Script */
	UCD_SCRIPT_Qaak, /**< @brief Klingon (Private Use) Script */
	UCD_SCRIPT_Rjng, /**< @brief Rejang Script */
	UCD_SCRIPT_Rohg, /**< @brief Hanifi Rohingya Script */
	UCD_SCRIPT_Roro, /**< @brief Rongorongo Script */
	UCD_SCRIPT_Runr, /**< @brief Runic Script */
	UCD_SCRIPT_Samr, /**< @brief Samaritan Script */
	UCD_SCRIPT_Sara, /**< @brief Sarati Script */
	UCD_SCRIPT_Sarb, /**< @brief Old South Arabian Script */
	UCD_SCRIPT_Saur, /**< @brief Saurashtra Script */
	UCD_SCRIPT_Sgnw, /**< @brief SignWriting Script */
	UCD_SCRIPT_Shaw, /**< @brief Shavian Script */
	UCD_SCRIPT_Shrd, /**< @brief Sharada Script */
	UCD_SCRIPT_Sidd, /**< @brief Siddham Script */
	UCD_SCRIPT_Sind, /**< @brief Khudawadi Script */
	UCD_SCRIPT_Sinh, /**< @brief Sinhala Script */
	UCD_SCRIPT_Sogd, /**< @brief Sogdian Script */
	UCD_SCRIPT_Sogo, /**< @brief Old Sogdian Script */
	UCD_SCRIPT_Sora, /**< @brief Sora Sompeng Script */
	UCD_SCRIPT_Soyo, /**< @brief Soyombo Script */
	UCD_SCRIPT_Sund, /**< @brief Sundanese Script */
	UCD_SCRIPT_Sylo, /**< @brief Syloti Nagri Script */
	UCD_SCRIPT_Syrc, /**< @brief Syriac Script */
	UCD_SCRIPT_Syre, /**< @brief Syriac (Estrangelo variant) Script */
	UCD_SCRIPT_Syrj, /**< @brief Syriac (Western variant) Script */
	UCD_SCRIPT_Syrn, /**< @brief Syriac (Eastern variant) Script */
	UCD_SCRIPT_Tagb, /**< @brief Tagbanwa Script */
	UCD_SCRIPT_Takr, /**< @brief Takri Script */
	UCD_SCRIPT_Tale, /**< @brief Tai Le Script */
	UCD_SCRIPT_Talu, /**< @brief New Tai Lue Script */
	UCD_SCRIPT_Taml, /**< @brief Tamil Script */
	UCD_SCRIPT_Tang, /**< @brief Tangut Script */
	UCD_SCRIPT_Tavt, /**< @brief Tai Viet Script */
	UCD_SCRIPT_Telu, /**< @brief Telugu Script */
	UCD_SCRIPT_Teng, /**< @brief Tengwar Script */
	UCD_SCRIPT_Tfng, /**< @brief Tifinagh Script */
	UCD_SCRIPT_Tglg, /**< @brief Tagalog Script */
	UCD_SCRIPT_Thaa, /**< @brief Thaana Script */
	UCD_SCRIPT_Thai, /**< @brief Thai Script */
	UCD_SCRIPT_Tibt, /**< @brief Tibetan Script */
	UCD_SCRIPT_Tirh, /**< @brief Tirhuta Script */
	UCD_SCRIPT_Ugar, /**< @brief Ugaritic Script */
	UCD_SCRIPT_Vaii, /**< @brief Vai Script */
	UCD_SCRIPT_Visp, /**< @brief Visible Speech Script */
	UCD_SCRIPT_Wara, /**< @brief Warang Citi Script */
	UCD_SCRIPT_Wole, /**< @brief Woleai Script */
	UCD_SCRIPT_Xpeo, /**< @brief Old Persian Script */
	UCD_SCRIPT_Xsux, /**< @brief Cuneiform Script */
	UCD_SCRIPT_Yiii, /**< @brief Yi Script */
	UCD_SCRIPT_Zanb, /**< @brief Zanabazar Square Script */
	UCD_SCRIPT_Zinh, /**< @brief Inherited Script */
	UCD_SCRIPT_Zmth, /**< @brief Mathematical notation Script */
	UCD_SCRIPT_Zsym, /**< @brief Symbols Script */
	UCD_SCRIPT_Zxxx, /**< @brief Unwritten documents Script */
	UCD_SCRIPT_Zyyy, /**< @brief Common Script */
	UCD_SCRIPT_Zzzz, /**< @brief Unknown Script */

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
	{		Adlm = UCD_SCRIPT_Adlm, /**< @brief Adlam Script */
		Afak = UCD_SCRIPT_Afak, /**< @brief Afaka Script */
		Aghb = UCD_SCRIPT_Aghb, /**< @brief Caucasian Albanian Script */
		Ahom = UCD_SCRIPT_Ahom, /**< @brief Ahom Script */
		Arab = UCD_SCRIPT_Arab, /**< @brief Arabic Script */
		Armi = UCD_SCRIPT_Armi, /**< @brief Imperial Aramaic Script */
		Armn = UCD_SCRIPT_Armn, /**< @brief Armenian Script */
		Avst = UCD_SCRIPT_Avst, /**< @brief Avestan Script */
		Bali = UCD_SCRIPT_Bali, /**< @brief Balinese Script */
		Bamu = UCD_SCRIPT_Bamu, /**< @brief Bamum Script */
		Bass = UCD_SCRIPT_Bass, /**< @brief Bassa Vah Script */
		Batk = UCD_SCRIPT_Batk, /**< @brief Batak Script */
		Beng = UCD_SCRIPT_Beng, /**< @brief Bengali Script */
		Bhks = UCD_SCRIPT_Bhks, /**< @brief Bhaiksuki Script */
		Blis = UCD_SCRIPT_Blis, /**< @brief Blissymbols Script */
		Bopo = UCD_SCRIPT_Bopo, /**< @brief Bopomofo Script */
		Brah = UCD_SCRIPT_Brah, /**< @brief Brahmi Script */
		Brai = UCD_SCRIPT_Brai, /**< @brief Braille Script */
		Bugi = UCD_SCRIPT_Bugi, /**< @brief Buginese Script */
		Buhd = UCD_SCRIPT_Buhd, /**< @brief Buhid Script */
		Cakm = UCD_SCRIPT_Cakm, /**< @brief Chakma Script */
		Cans = UCD_SCRIPT_Cans, /**< @brief Canadian Aboriginal Script */
		Cari = UCD_SCRIPT_Cari, /**< @brief Carian Script */
		Cham = UCD_SCRIPT_Cham, /**< @brief Cham Script */
		Cher = UCD_SCRIPT_Cher, /**< @brief Cherokee Script */
		Cirt = UCD_SCRIPT_Cirt, /**< @brief Cirth Script */
		Copt = UCD_SCRIPT_Copt, /**< @brief Coptic Script */
		Cprt = UCD_SCRIPT_Cprt, /**< @brief Cypriot Script */
		Cyrl = UCD_SCRIPT_Cyrl, /**< @brief Cyrillic Script */
		Cyrs = UCD_SCRIPT_Cyrs, /**< @brief Cyrillic (Old Church Slavonic variant) Script */
		Deva = UCD_SCRIPT_Deva, /**< @brief Devanagari Script */
		Dogr = UCD_SCRIPT_Dogr, /**< @brief Dogra Script */
		Dsrt = UCD_SCRIPT_Dsrt, /**< @brief Deseret Script */
		Dupl = UCD_SCRIPT_Dupl, /**< @brief Duployan Script */
		Egyd = UCD_SCRIPT_Egyd, /**< @brief Egyptian demotic Script */
		Egyh = UCD_SCRIPT_Egyh, /**< @brief Egyptian hieratic Script */
		Egyp = UCD_SCRIPT_Egyp, /**< @brief Egyptian Hieroglyphs Script */
		Elba = UCD_SCRIPT_Elba, /**< @brief Elbasan Script */
		Ethi = UCD_SCRIPT_Ethi, /**< @brief Ethiopic Script */
		Geok = UCD_SCRIPT_Geok, /**< @brief Khutsuri (Asomtavruli and Nuskhuri) Script */
		Geor = UCD_SCRIPT_Geor, /**< @brief Georgian Script */
		Glag = UCD_SCRIPT_Glag, /**< @brief Glagolitic Script */
		Gong = UCD_SCRIPT_Gong, /**< @brief Gunjala Gondi Script */
		Gonm = UCD_SCRIPT_Gonm, /**< @brief Masaram Gondi Script */
		Goth = UCD_SCRIPT_Goth, /**< @brief Gothic Script */
		Gran = UCD_SCRIPT_Gran, /**< @brief Grantha Script */
		Grek = UCD_SCRIPT_Grek, /**< @brief Greek Script */
		Gujr = UCD_SCRIPT_Gujr, /**< @brief Gujarati Script */
		Guru = UCD_SCRIPT_Guru, /**< @brief Gurmukhi Script */
		Hang = UCD_SCRIPT_Hang, /**< @brief Hangul Script */
		Hani = UCD_SCRIPT_Hani, /**< @brief Han Script */
		Hano = UCD_SCRIPT_Hano, /**< @brief Hanunoo Script */
		Hans = UCD_SCRIPT_Hans, /**< @brief Han (Simplified variant) Script */
		Hant = UCD_SCRIPT_Hant, /**< @brief Han (Traditional variant) Script */
		Hatr = UCD_SCRIPT_Hatr, /**< @brief Hatran Script */
		Hebr = UCD_SCRIPT_Hebr, /**< @brief Hebrew Script */
		Hira = UCD_SCRIPT_Hira, /**< @brief Hiragana Script */
		Hluw = UCD_SCRIPT_Hluw, /**< @brief Anatolian Hieroglyphs Script */
		Hmng = UCD_SCRIPT_Hmng, /**< @brief Pahawh Hmong Script */
		Hrkt = UCD_SCRIPT_Hrkt, /**< @brief Katakana Or Hiragana Script */
		Hung = UCD_SCRIPT_Hung, /**< @brief Old Hungarian Script */
		Inds = UCD_SCRIPT_Inds, /**< @brief Indus (Harappan) Script */
		Ital = UCD_SCRIPT_Ital, /**< @brief Old Italic Script */
		Java = UCD_SCRIPT_Java, /**< @brief Javanese Script */
		Jpan = UCD_SCRIPT_Jpan, /**< @brief Japanese (alias for Han + Hiragana + Katakana) Script */
		Jurc = UCD_SCRIPT_Jurc, /**< @brief Jurchen Script */
		Kali = UCD_SCRIPT_Kali, /**< @brief Kayah Li Script */
		Kana = UCD_SCRIPT_Kana, /**< @brief Katakana Script */
		Khar = UCD_SCRIPT_Khar, /**< @brief Kharoshthi Script */
		Khmr = UCD_SCRIPT_Khmr, /**< @brief Khmer Script */
		Khoj = UCD_SCRIPT_Khoj, /**< @brief Khojki Script */
		Knda = UCD_SCRIPT_Knda, /**< @brief Kannada Script */
		Kore = UCD_SCRIPT_Kore, /**< @brief Korean (alias for Hangul + Han) Script */
		Kpel = UCD_SCRIPT_Kpel, /**< @brief Kpelle Script */
		Kthi = UCD_SCRIPT_Kthi, /**< @brief Kaithi Script */
		Lana = UCD_SCRIPT_Lana, /**< @brief Tai Tham Script */
		Laoo = UCD_SCRIPT_Laoo, /**< @brief Lao Script */
		Latf = UCD_SCRIPT_Latf, /**< @brief Latin (Fraktur variant) Script */
		Latg = UCD_SCRIPT_Latg, /**< @brief Latin (Gothic variant) Script */
		Latn = UCD_SCRIPT_Latn, /**< @brief Latin Script */
		Lepc = UCD_SCRIPT_Lepc, /**< @brief Lepcha Script */
		Limb = UCD_SCRIPT_Limb, /**< @brief Limbu Script */
		Lina = UCD_SCRIPT_Lina, /**< @brief Linear A Script */
		Linb = UCD_SCRIPT_Linb, /**< @brief Linear B Script */
		Lisu = UCD_SCRIPT_Lisu, /**< @brief Lisu Script */
		Loma = UCD_SCRIPT_Loma, /**< @brief Loma Script */
		Lyci = UCD_SCRIPT_Lyci, /**< @brief Lycian Script */
		Lydi = UCD_SCRIPT_Lydi, /**< @brief Lydian Script */
		Mahj = UCD_SCRIPT_Mahj, /**< @brief Mahajani Script */
		Maka = UCD_SCRIPT_Maka, /**< @brief Makasar Script */
		Mand = UCD_SCRIPT_Mand, /**< @brief Mandaic Script */
		Mani = UCD_SCRIPT_Mani, /**< @brief Manichaean Script */
		Marc = UCD_SCRIPT_Marc, /**< @brief Marchen Script */
		Maya = UCD_SCRIPT_Maya, /**< @brief Mayan hieroglyphs Script */
		Medf = UCD_SCRIPT_Medf, /**< @brief Medefaidrin Script */
		Mend = UCD_SCRIPT_Mend, /**< @brief Mende Kikakui Script */
		Merc = UCD_SCRIPT_Merc, /**< @brief Meroitic Cursive Script */
		Mero = UCD_SCRIPT_Mero, /**< @brief Meroitic Hieroglyphs Script */
		Mlym = UCD_SCRIPT_Mlym, /**< @brief Malayalam Script */
		Modi = UCD_SCRIPT_Modi, /**< @brief Modi Script */
		Mong = UCD_SCRIPT_Mong, /**< @brief Mongolian Script */
		Moon = UCD_SCRIPT_Moon, /**< @brief Moon (Moon code, Moon script, Moon type) Script */
		Mroo = UCD_SCRIPT_Mroo, /**< @brief Mro Script */
		Mtei = UCD_SCRIPT_Mtei, /**< @brief Meetei Mayek Script */
		Mult = UCD_SCRIPT_Mult, /**< @brief Multani Script */
		Mymr = UCD_SCRIPT_Mymr, /**< @brief Myanmar Script */
		Narb = UCD_SCRIPT_Narb, /**< @brief Old North Arabian Script */
		Nbat = UCD_SCRIPT_Nbat, /**< @brief Nabataean Script */
		Newa = UCD_SCRIPT_Newa, /**< @brief Newa Script */
		Nkgb = UCD_SCRIPT_Nkgb, /**< @brief Naxi Geba Script */
		Nkoo = UCD_SCRIPT_Nkoo, /**< @brief Nko Script */
		Nshu = UCD_SCRIPT_Nshu, /**< @brief Nushu Script */
		Ogam = UCD_SCRIPT_Ogam, /**< @brief Ogham Script */
		Olck = UCD_SCRIPT_Olck, /**< @brief Ol Chiki Script */
		Orkh = UCD_SCRIPT_Orkh, /**< @brief Old Turkic Script */
		Orya = UCD_SCRIPT_Orya, /**< @brief Oriya Script */
		Osge = UCD_SCRIPT_Osge, /**< @brief Osage Script */
		Osma = UCD_SCRIPT_Osma, /**< @brief Osmanya Script */
		Palm = UCD_SCRIPT_Palm, /**< @brief Palmyrene Script */
		Pauc = UCD_SCRIPT_Pauc, /**< @brief Pau Cin Hau Script */
		Perm = UCD_SCRIPT_Perm, /**< @brief Old Permic Script */
		Phag = UCD_SCRIPT_Phag, /**< @brief Phags Pa Script */
		Phli = UCD_SCRIPT_Phli, /**< @brief Inscriptional Pahlavi Script */
		Phlp = UCD_SCRIPT_Phlp, /**< @brief Psalter Pahlavi Script */
		Phlv = UCD_SCRIPT_Phlv, /**< @brief Book Pahlavi Script */
		Phnx = UCD_SCRIPT_Phnx, /**< @brief Phoenician Script */
		Plrd = UCD_SCRIPT_Plrd, /**< @brief Miao Script */
		Prti = UCD_SCRIPT_Prti, /**< @brief Inscriptional Parthian Script */
		Qaak = UCD_SCRIPT_Qaak, /**< @brief Klingon (Private Use) Script */
		Rjng = UCD_SCRIPT_Rjng, /**< @brief Rejang Script */
		Rohg = UCD_SCRIPT_Rohg, /**< @brief Hanifi Rohingya Script */
		Roro = UCD_SCRIPT_Roro, /**< @brief Rongorongo Script */
		Runr = UCD_SCRIPT_Runr, /**< @brief Runic Script */
		Samr = UCD_SCRIPT_Samr, /**< @brief Samaritan Script */
		Sara = UCD_SCRIPT_Sara, /**< @brief Sarati Script */
		Sarb = UCD_SCRIPT_Sarb, /**< @brief Old South Arabian Script */
		Saur = UCD_SCRIPT_Saur, /**< @brief Saurashtra Script */
		Sgnw = UCD_SCRIPT_Sgnw, /**< @brief SignWriting Script */
		Shaw = UCD_SCRIPT_Shaw, /**< @brief Shavian Script */
		Shrd = UCD_SCRIPT_Shrd, /**< @brief Sharada Script */
		Sidd = UCD_SCRIPT_Sidd, /**< @brief Siddham Script */
		Sind = UCD_SCRIPT_Sind, /**< @brief Khudawadi Script */
		Sinh = UCD_SCRIPT_Sinh, /**< @brief Sinhala Script */
		Sogd = UCD_SCRIPT_Sogd, /**< @brief Sogdian Script */
		Sogo = UCD_SCRIPT_Sogo, /**< @brief Old Sogdian Script */
		Sora = UCD_SCRIPT_Sora, /**< @brief Sora Sompeng Script */
		Soyo = UCD_SCRIPT_Soyo, /**< @brief Soyombo Script */
		Sund = UCD_SCRIPT_Sund, /**< @brief Sundanese Script */
		Sylo = UCD_SCRIPT_Sylo, /**< @brief Syloti Nagri Script */
		Syrc = UCD_SCRIPT_Syrc, /**< @brief Syriac Script */
		Syre = UCD_SCRIPT_Syre, /**< @brief Syriac (Estrangelo variant) Script */
		Syrj = UCD_SCRIPT_Syrj, /**< @brief Syriac (Western variant) Script */
		Syrn = UCD_SCRIPT_Syrn, /**< @brief Syriac (Eastern variant) Script */
		Tagb = UCD_SCRIPT_Tagb, /**< @brief Tagbanwa Script */
		Takr = UCD_SCRIPT_Takr, /**< @brief Takri Script */
		Tale = UCD_SCRIPT_Tale, /**< @brief Tai Le Script */
		Talu = UCD_SCRIPT_Talu, /**< @brief New Tai Lue Script */
		Taml = UCD_SCRIPT_Taml, /**< @brief Tamil Script */
		Tang = UCD_SCRIPT_Tang, /**< @brief Tangut Script */
		Tavt = UCD_SCRIPT_Tavt, /**< @brief Tai Viet Script */
		Telu = UCD_SCRIPT_Telu, /**< @brief Telugu Script */
		Teng = UCD_SCRIPT_Teng, /**< @brief Tengwar Script */
		Tfng = UCD_SCRIPT_Tfng, /**< @brief Tifinagh Script */
		Tglg = UCD_SCRIPT_Tglg, /**< @brief Tagalog Script */
		Thaa = UCD_SCRIPT_Thaa, /**< @brief Thaana Script */
		Thai = UCD_SCRIPT_Thai, /**< @brief Thai Script */
		Tibt = UCD_SCRIPT_Tibt, /**< @brief Tibetan Script */
		Tirh = UCD_SCRIPT_Tirh, /**< @brief Tirhuta Script */
		Ugar = UCD_SCRIPT_Ugar, /**< @brief Ugaritic Script */
		Vaii = UCD_SCRIPT_Vaii, /**< @brief Vai Script */
		Visp = UCD_SCRIPT_Visp, /**< @brief Visible Speech Script */
		Wara = UCD_SCRIPT_Wara, /**< @brief Warang Citi Script */
		Wole = UCD_SCRIPT_Wole, /**< @brief Woleai Script */
		Xpeo = UCD_SCRIPT_Xpeo, /**< @brief Old Persian Script */
		Xsux = UCD_SCRIPT_Xsux, /**< @brief Cuneiform Script */
		Yiii = UCD_SCRIPT_Yiii, /**< @brief Yi Script */
		Zanb = UCD_SCRIPT_Zanb, /**< @brief Zanabazar Square Script */
		Zinh = UCD_SCRIPT_Zinh, /**< @brief Inherited Script */
		Zmth = UCD_SCRIPT_Zmth, /**< @brief Mathematical notation Script */
		Zsym = UCD_SCRIPT_Zsym, /**< @brief Symbols Script */
		Zxxx = UCD_SCRIPT_Zxxx, /**< @brief Unwritten documents Script */
		Zyyy = UCD_SCRIPT_Zyyy, /**< @brief Common Script */
		Zzzz = UCD_SCRIPT_Zzzz, /**< @brief Unknown Script */

	};
}
#endif

#endif
