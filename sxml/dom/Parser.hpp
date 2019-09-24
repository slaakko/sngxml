// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SXML_DOM_PARSER_INCLUDED
#define SXML_DOM_PARSER_INCLUDED
#include <sxml/dom/Document.hpp>

namespace sxml { namespace dom {

std::unique_ptr<Document> ParseDocument(const std::u32string& content, const std::string& systemId);
std::unique_ptr<Document> ReadDocument(const std::string& fileName);

} } // namespace sxml::dom

#endif // SXML_DOM_PARSER_INCLUDED
