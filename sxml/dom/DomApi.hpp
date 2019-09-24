// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SXML_DOM_API_INCLUDED
#define SXML_DOM_API_INCLUDED

#ifdef _WIN32

#ifdef SXML_DOM_EXPORTS
#define SXML_DOM_API __declspec(dllexport)
#else
#define SXML_DOM_API __declspec(dllimport)

#ifdef NDEBUG
#pragma comment(lib, "sxmldom.lib")
#else
#pragma comment(lib, "sxmldomd.lib")
#endif

#endif

#else

#define SXML_DOM_API

#endif

#endif // SXML_DOM_API_INCLUDED
