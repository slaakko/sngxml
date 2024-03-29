// =================================
// Copyright (c) 2019 Seppo Laakko
// Distributed under the MIT license
// =================================

#ifndef SNGXML_DOM_API_INCLUDED
#define SNGXML_DOM_API_INCLUDED

#ifdef _WIN32

#ifdef SNGXML_DOM_EXPORTS
#define SNGXML_DOM_API __declspec(dllexport)
#else
#define SNGXML_DOM_API __declspec(dllimport)

#ifdef NDEBUG
#pragma comment(lib, "sngxmldom.lib")
#else
#pragma comment(lib, "sngxmldomd.lib")
#endif

#endif

#else

#define SNGXML_DOM_API

#endif

#endif // SNGXML_DOM_API_INCLUDED
