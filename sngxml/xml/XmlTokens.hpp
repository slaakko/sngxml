#ifndef XmlTokens_HPP
#define XmlTokens_HPP

// this file has been automatically generated from 'D:/work/sxml-project/sxml/xml/XmlLexer.lexer' using soulng lexer generator slg version 1.1.0

#include <sxml/xml/XmlApi.hpp>
#include <string>

namespace XmlTokens
{
    const int END = 0;
    const int CHAR = 1;
    const int S = 2;
    const int NAME = 3;
    const int EQ = 4;
    const int VERSIONNUM = 5;
    const int XMLPI = 6;
    const int PISTART = 7;
    const int PIEND = 8;
    const int XML = 9;
    const int VERSION = 10;
    const int ENCODING = 11;
    const int ENCNAME = 12;
    const int STANDALONE = 13;
    const int YESNO = 14;
    const int COMMENTSTART = 15;
    const int COMMENTEND = 16;
    const int MINUS = 17;
    const int BEGINSTAG = 18;
    const int ENDTAG = 19;
    const int EMPTYELEMTAG = 20;
    const int BEGINETAG = 21;
    const int REFERENCE = 22;
    const int CHARDATA = 23;
    const int CDSTART = 24;
    const int CDEND = 25;
    const int AMP = 26;
    const int ATTVALUE = 27;

    SXML_XML_API void InitTokenIdMap();
    SXML_XML_API int GetTokenId(const std::u32string& tokenName);
    SXML_XML_API const char* GetTokenName(int tokenId);
    SXML_XML_API const char* GetTokenInfo(int tokenId);
}
#endif
