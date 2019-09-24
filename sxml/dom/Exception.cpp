// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#include <sxml/dom/Exception.hpp>

namespace sxml { namespace dom {

DomException::DomException(const std::string& message_) : std::runtime_error(message_)
{
}

} } // namespace sxml::dom
