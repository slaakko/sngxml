#ifndef XMLPARSER_HPP
#define XMLPARSER_HPP
#include <sxml/xml/XmlProcessor.hpp>
#include <soulng/lexer/Token.hpp>
#include <soulng/parser/Match.hpp>
#include <soulng/parser/Value.hpp>

// this file has been automatically generated from 'D:/work/sxml-project/sxml/xml/XmlParser.parser' using soulng parser generator spg version 1.2.0

class TrivialLexer;

struct SXML_XML_API XmlParser
{
    static void Parse(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Document(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Char(TrivialLexer& lexer);
    static soulng::parser::Match S(TrivialLexer& lexer);
    static soulng::parser::Match NameStartChar(TrivialLexer& lexer);
    static soulng::parser::Match NameChar(TrivialLexer& lexer);
    static soulng::parser::Match Name(TrivialLexer& lexer);
    static soulng::parser::Match Names(TrivialLexer& lexer);
    static soulng::parser::Match Nmtoken(TrivialLexer& lexer);
    static soulng::parser::Match Nmtokens(TrivialLexer& lexer);
    static soulng::parser::Match Prolog(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match XMLDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match VersionInfo(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match VersionNum(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match VersionNumDQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match VersionNumSQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match VersionNumber(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EncodingDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EncodingName(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EncNameDQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EncNameSQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EncName(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match SDDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match DocTypeDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match ExternalID(TrivialLexer& lexer);
    static soulng::parser::Match SystemLiteral(TrivialLexer& lexer);
    static soulng::parser::Match PubidLiteral(TrivialLexer& lexer);
    static soulng::parser::Match PubidChar(TrivialLexer& lexer);
    static soulng::parser::Match IntSubset(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match MarkupDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match DeclSep(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match ElementDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match ContentSpec(TrivialLexer& lexer);
    static soulng::parser::Match Children(TrivialLexer& lexer);
    static soulng::parser::Match CP(TrivialLexer& lexer);
    static soulng::parser::Match Choice(TrivialLexer& lexer);
    static soulng::parser::Match Seq(TrivialLexer& lexer);
    static soulng::parser::Match Mixed(TrivialLexer& lexer);
    static soulng::parser::Match AttlistDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match AttDef(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match AttType(TrivialLexer& lexer);
    static soulng::parser::Match StringType(TrivialLexer& lexer);
    static soulng::parser::Match TokenizedType(TrivialLexer& lexer);
    static soulng::parser::Match EnumeratedType(TrivialLexer& lexer);
    static soulng::parser::Match NotationType(TrivialLexer& lexer);
    static soulng::parser::Match Enumeration(TrivialLexer& lexer);
    static soulng::parser::Match DefaultDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EntityDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match GEDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match PEDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EntityDef(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match PEDef(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EntityValue(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match NDataDecl(TrivialLexer& lexer);
    static soulng::parser::Match PEReference(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match NotationDecl(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match PublicID(TrivialLexer& lexer);
    static soulng::parser::Match Element(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match ETag(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Content(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match CharDataChar(TrivialLexer& lexer);
    static soulng::parser::Match CharData(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match CDSect(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Attribute(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match AttValueDQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match AttValueSQ(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match AttValue(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match EntityRef(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match DecCodePoint(TrivialLexer& lexer);
    static soulng::parser::Match HexCodePoint(TrivialLexer& lexer);
    static soulng::parser::Match CharRef(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Reference(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Misc(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match Comment(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match PI(TrivialLexer& lexer, sxml::xml::XmlProcessor* processor);
    static soulng::parser::Match PITarget(TrivialLexer& lexer);
    static soulng::parser::Match Xml(TrivialLexer& lexer);
    static soulng::parser::Match Eq(TrivialLexer& lexer);
    static soulng::parser::Match YesNo(TrivialLexer& lexer);
};

#endif // XMLPARSER_HPP
