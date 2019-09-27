// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SNGXML_DOM_PARSER_INCLUDED
#define SNGXML_DOM_PARSER_INCLUDED
#include <sngxml/dom/Document.hpp>

namespace sngxml { namespace dom {

std::unique_ptr<Document> ParseDocument(const std::u32string& content, const std::string& systemId);
std::unique_ptr<Document> ReadDocument(const std::string& fileName);

} } // namespace sngxml::dom

#endif // SNGXML_DOM_PARSER_INCLUDED
