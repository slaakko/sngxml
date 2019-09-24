
// this file has been automatically generated from 'D:/work/sxml-project/sxml/xml/XmlLexer.lexer' using soulng lexer generator slg version 1.1.0

#include <sxml/xml/XmlKeywords.hpp>
#include <sxml/xml/XmlTokens.hpp>

namespace XmlKeywords
{
    using namespace XmlTokens;

    Keyword keywords[] =
    {
        {U"version", VERSION}, 
        {U"encoding", ENCODING}, 
        {U"standalone", STANDALONE},
        {nullptr, -1}
    };

    KeywordMap keywordMap(keywords);

    KeywordMap* GetKeywordMap()
    {
        return &keywordMap;
    }
}
