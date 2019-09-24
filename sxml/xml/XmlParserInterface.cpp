// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#include <sxml/xml/XmlParserInterface.hpp>
#include <sxml/xml/XmlParser.hpp>
#include <soulng/lexer/TrivialLexer.hpp>
#include <soulng/util/Unicode.hpp>
#include <soulng/util/MappedInputFile.hpp>

namespace sxml { namespace xml {

using namespace soulng::util;
using namespace soulng::unicode;

void ParseXmlFile(const std::string& xmlFileName, XmlContentHandler* contentHandler)
{
    std::string xmlContent = ReadFile(xmlFileName);
    ParseXmlContent(xmlContent, xmlFileName, contentHandler);
}

void ParseXmlContent(const std::string& xmlContent, const std::string& systemId, XmlContentHandler* contentHandler)
{
    ParseXmlContent(ToUtf32(xmlContent), systemId, contentHandler);
}

void ParseXmlContent(const std::u32string& xmlContent, const std::string& systemId, XmlContentHandler* contentHandler)
{
    TrivialLexer xmlLexer(xmlContent, systemId, 0);
    const char32_t* contentStart = &xmlContent[0];
    const char32_t* contentEnd = &xmlContent[0] + xmlContent.length();
    XmlProcessor xmlProcessor(xmlLexer, contentStart, contentEnd, contentHandler);
    XmlParser::Parse(xmlLexer, &xmlProcessor);
}

} } // namespace sxml::xml
