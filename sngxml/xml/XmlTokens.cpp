
// this file has been automatically generated from 'D:/work/sxml-project/sxml/xml/XmlLexer.lexer' using soulng lexer generator slg version 1.1.0

#include <sxml/xml/XmlTokens.hpp>
#include <map>

namespace XmlTokens
{
    std::map<std::u32string, int> tokenIdMap;

    void InitTokenIdMap()
    {
        tokenIdMap[U"AMP"] = 26;
        tokenIdMap[U"ATTVALUE"] = 27;
        tokenIdMap[U"BEGINETAG"] = 21;
        tokenIdMap[U"BEGINSTAG"] = 18;
        tokenIdMap[U"CDEND"] = 25;
        tokenIdMap[U"CDSTART"] = 24;
        tokenIdMap[U"CHAR"] = 1;
        tokenIdMap[U"CHARDATA"] = 23;
        tokenIdMap[U"COMMENTEND"] = 16;
        tokenIdMap[U"COMMENTSTART"] = 15;
        tokenIdMap[U"EMPTYELEMTAG"] = 20;
        tokenIdMap[U"ENCNAME"] = 12;
        tokenIdMap[U"ENCODING"] = 11;
        tokenIdMap[U"ENDTAG"] = 19;
        tokenIdMap[U"EQ"] = 4;
        tokenIdMap[U"MINUS"] = 17;
        tokenIdMap[U"NAME"] = 3;
        tokenIdMap[U"PIEND"] = 8;
        tokenIdMap[U"PISTART"] = 7;
        tokenIdMap[U"REFERENCE"] = 22;
        tokenIdMap[U"S"] = 2;
        tokenIdMap[U"STANDALONE"] = 13;
        tokenIdMap[U"VERSION"] = 10;
        tokenIdMap[U"VERSIONNUM"] = 5;
        tokenIdMap[U"XML"] = 9;
        tokenIdMap[U"XMLPI"] = 6;
        tokenIdMap[U"YESNO"] = 14;
    }

    int GetTokenId(const std::u32string& tokenName)
    {
        auto it = tokenIdMap.find(tokenName);
        if (it != tokenIdMap.cend())
        {
            return it->second;
        }
        else
        {
            return -1;
        }
    }

    const char* tokenName[] =
    {
        "END",
        "CHAR",
        "S",
        "NAME",
        "EQ",
        "VERSIONNUM",
        "XMLPI",
        "PISTART",
        "PIEND",
        "XML",
        "VERSION",
        "ENCODING",
        "ENCNAME",
        "STANDALONE",
        "YESNO",
        "COMMENTSTART",
        "COMMENTEND",
        "MINUS",
        "BEGINSTAG",
        "ENDTAG",
        "EMPTYELEMTAG",
        "BEGINETAG",
        "REFERENCE",
        "CHARDATA",
        "CDSTART",
        "CDEND",
        "AMP",
        "ATTVALUE"
    };

    const char* GetTokenName(int tokenId)
    {
        return tokenName[tokenId];
    }

    const char* tokenInfo[] =
    {
        "end of file",
        "char",
        "space",
        "name",
        "equal",
        "version number",
        "xmlpi",
        "PIstart",
        "PIend",
        "'xml'",
        "'version'",
        "'encoding'",
        "encoding name",
        "'standalone'",
        "yesno",
        "comment start",
        "comment end",
        "'-'",
        "'<'",
        "'>'",
        "'/>'",
        "'</'",
        "reference",
        "character data",
        "chardata section start",
        "chardata section end",
        "'&'",
        "attribute value"
    };

    const char* GetTokenInfo(int tokenId)
    {
        return tokenInfo[tokenId];
    }

    struct Initializer
    {
        Initializer() { InitTokenIdMap(); }
    };

    Initializer initializer;
}
