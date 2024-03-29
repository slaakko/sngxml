// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SNGXML_XML_API_INCLUDED
#define SNGXML_XML_API_INCLUDED

#ifdef _WIN32

#ifdef SNGXML_XML_EXPORTS
#define SNGXML_XML_API __declspec(dllexport)
#else
#define SNGXML_XML_API __declspec(dllimport)

#ifdef NDEBUG
#pragma comment(lib, "sngxmlxml.lib")
#else
#pragma comment(lib, "sngxmlxmld.lib")
#endif

#endif

#else

#define SNGXML_XML_API

#endif

#endif // SNGXML_XML_API_INCLUDED
