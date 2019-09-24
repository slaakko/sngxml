// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#include <sxml/dom/DomApi.hpp>
#include <stdexcept>

namespace sxml { namespace dom {

class SXML_DOM_API DomException : std::runtime_error
{
public:
    DomException(const std::string& message_);
};

} } // namespace sxml::dom
