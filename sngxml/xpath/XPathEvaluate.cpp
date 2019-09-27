// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#include <sngxml/xpath/XPathEvaluate.hpp>
#include <sngxml/xpath/XPathContext.hpp>
//#include <sngxml/xpath/XPathParser.hpp> todo
#include <sngxml/xpath/XPathDebug.hpp>
#include <sngxml/dom/Document.hpp>
#include <iostream>
#include <chrono>

namespace sngxml { namespace xpath {

std::unique_ptr<XPathObject> Evaluate(const std::u32string& xpathExpression, sngxml::dom::Node* node)
{
    std::unique_ptr<XPathObject> dummy; // todo
/*
    if (XPathDebugParsing())
    {
        //xpathGrammar->SetLog(&std::cout); // todo
    }
    std::chrono::time_point<std::chrono::steady_clock> startQuery = std::chrono::steady_clock::now();
    std::unique_ptr<XPathExpr> xpathExpr(xpathGrammar->Parse(&xpathExpression[0], &xpathExpression[0] + xpathExpression.length(), 0, "")); 
    std::chrono::time_point<std::chrono::steady_clock> endQuery = std::chrono::steady_clock::now();
    if (XPathDebugQuery())
    {
        std::unique_ptr<dom::Node> queryDom = xpathExpr->ToDom();
        SetXPathQueryDom(std::move(queryDom));
        SetXPathQueryDuration(std::chrono::nanoseconds(endQuery - startQuery));
    }
    std::chrono::time_point<std::chrono::steady_clock> startEvaluate = std::chrono::steady_clock::now();
    XPathContext context(node, 1, 1);
    std::unique_ptr<XPathObject> result = xpathExpr->Evaluate(context);
    std::chrono::time_point<std::chrono::steady_clock> endEvaluate = std::chrono::steady_clock::now();
    if (XPathDebugQuery())
    {
        SetXPathExecuteDuration(endEvaluate - startEvaluate);
    }
    return result;
    */
    return dummy;
}

std::unique_ptr<XPathObject> Evaluate(const std::u32string& xpathExpression, sngxml::dom::Document* document)
{
    return Evaluate(xpathExpression, static_cast<sngxml::dom::Node*>(document));
}

} } // namespace sngxml::xpath
