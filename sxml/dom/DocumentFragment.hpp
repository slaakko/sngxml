// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SXML_DOM_DOCUMENT_FRAGMENT_INCLUDED
#define SXML_DOM_DOCUMENT_FRAGMENT_INCLUDED
#include <sxml/dom/Node.hpp>

namespace sxml { namespace dom {

class SXML_DOM_API DocumentFragment : public ParentNode
{
public:
    DocumentFragment();
    DocumentFragment(const DocumentFragment&) = delete;
    DocumentFragment& operator=(const DocumentFragment&) = delete;
    DocumentFragment(DocumentFragment&&) = delete;
    DocumentFragment& operator=(DocumentFragment&&) = delete;
    std::unique_ptr<Node> CloneNode(bool deep) override;
};

} } // namespace sxml::dom

#endif // SXML_DOM_DOCUMENT_FRAGMENT_INCLUDED
