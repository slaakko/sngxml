// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

// ==========================================================
// Interface to a non-validating XML parser with SAX-like API
// Author: S. Laakko
// ==========================================================

#ifndef SXML_XML_XML_PARSER
#define SXML_XML_XML_PARSER
#include <sxml/xml/XmlContentHandler.hpp>

namespace sxml { namespace xml {

//  ==================================================================================
//  ParseXmlFile parses given UTF-8 encoded XML file using given content handler.
//  ==================================================================================

SXML_XML_API void ParseXmlFile(const std::string& xmlFileName, XmlContentHandler* contentHandler);

//  ==================================================================================
//  ParseXmlContent parses given UTF-8 encoded XML string using given content handler.
//  systemId is used for error messages only. It can be for example a file name or URL 
//  that identifies the XML string to parse.
//  ===================================================================================

SXML_XML_API void ParseXmlContent(const std::string& xmlContent, const std::string& systemId, XmlContentHandler* contentHandler);

//  ===================================================================================
//  ParseXmlContent parses given UTF-32 encoded XML string using given content handler.
//  systemId is used for error messages only. It can be for example a file name or URL 
//  that identifies the XML string to parse.
//  ===================================================================================

SXML_XML_API void ParseXmlContent(const std::u32string& xmlContent, const std::string& systemId, XmlContentHandler* contentHandler);

} } // namespace sxml::xml

#endif // SXML_XML_XML_PARSER
