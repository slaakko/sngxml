// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SXML_XML_API_INCLUDED
#define SXML_XML_API_INCLUDED

#ifdef _WIN32

#ifdef SXML_XML_EXPORTS
#define SXML_XML_API __declspec(dllexport)
#else
#define SXML_XML_API __declspec(dllimport)

#ifdef NDEBUG
#pragma comment(lib, "sxmlxml.lib")
#else
#pragma comment(lib, "sxmlxmld.lib")
#endif

#endif

#else

#define SXML_XML_API

#endif

#endif // SXML_XML_API_INCLUDED
