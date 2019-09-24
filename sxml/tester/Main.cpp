#include <sxml/xml/XmlParserInterface.hpp>
#include <sxml/xml/XmlContentHandler.hpp>
#include <soulng/lexer/TrivialLexer.hpp>
#include <soulng/util/Unicode.hpp>
#include <soulng/util/CodeFormatter.hpp>
#include <soulng/util/TextUtils.hpp>
#include <iostream>

using namespace soulng::unicode;

class ContentHandler : public sxml::xml::XmlContentHandler
{
public:
    ContentHandler();
    void StartDocument() override
    {
        formatter.WriteLine("*** start document ***");
    }
    void EndDocument() override
    {
        formatter.WriteLine("*** end document ***");
    }
    void Version(const std::u32string& xmlVersion) override
    {
        formatter.WriteLine("version: " + ToUtf8(xmlVersion));
    }
    void Standalone(bool standalone) override
    {
        std::string sd = "true";
        if (!standalone)
        {
            sd = "false";
        }
        formatter.WriteLine("standalone: " + sd);
    }
    void Encoding(const std::u32string& encoding)
    {
        formatter.WriteLine("encoding: " + ToUtf8(encoding));
    }
    void Text(const std::u32string& text)
    {
        formatter.WriteLine("text: " + ToUtf8(text));
    }
    void Comment(const std::u32string& comment) override
    {
        formatter.WriteLine("comment: " + ToUtf8(comment));
    }
    void PI(const std::u32string& target, const std::u32string& data) override
    {
        formatter.WriteLine("PI: " + ToUtf8(target) + ": " + ToUtf8(data));
    }
    void CDataSection(const std::u32string& cdata) override
    {
        formatter.WriteLine("CDATA: " + ToUtf8(cdata));
    }
    void StartElement(const std::u32string& namespaceUri, const std::u32string& localName, const std::u32string& qualifiedName, const sxml::xml::Attributes& attributes) override
    {
        formatter.WriteLine("start element:");
        formatter.IncIndent();
        formatter.WriteLine("ns: " + ToUtf8(namespaceUri));
        formatter.WriteLine("local name: " + ToUtf8(localName));
        formatter.WriteLine("qualified name: " + ToUtf8(qualifiedName));
        formatter.WriteLine("attributes:");
        formatter.IncIndent();
        for (const sxml::xml::Attribute& attr : attributes)
        {
            formatter.WriteLine("ns: " + ToUtf8(attr.NamespaceUri()));
            formatter.WriteLine("local name: " + ToUtf8(attr.LocalName()));
            formatter.WriteLine("qualified name: " + ToUtf8(attr.QualifiedName()));
            formatter.WriteLine("value: " + ToUtf8(attr.Value()));
            formatter.WriteLine("---");
        }
        formatter.DecIndent();
        formatter.DecIndent();
    }
    void EndElement(const std::u32string& namespaceUri, const std::u32string& localName, const std::u32string& qualifiedName) override
    {
        formatter.WriteLine("end element:");
        formatter.IncIndent();
        formatter.WriteLine("ns: " + ToUtf8(namespaceUri));
        formatter.WriteLine("local name: " + ToUtf8(localName));
        formatter.WriteLine("qualified name: " + ToUtf8(qualifiedName));
        formatter.DecIndent();
    }
    void SkippedEntity(const std::u32string& entityName)
    {
        formatter.WriteLine("skipped entity:" + ToUtf8(entityName));
    }
private:
    CodeFormatter formatter;
};

ContentHandler::ContentHandler() : formatter(std::cout)
{
}

void PrintUsage()
{
    std::cout << "Usage: xmltester [options] { file.xml }" << std::endl;
    std::cout << "options:" << std::endl;
    std::cout << "--help | -h" << std::endl;
    std::cout << "  Print help and exit." << std::endl;
}

int main(int argc, const char** argv)
{
    try
    {
        std::vector<std::string> xmlFileNames;
        for (int i = 1; i < argc; ++i)
        {
            std::string arg = argv[i];
            if (StartsWith(arg, "--"))
            {
                if (arg == "--help")
                {
                    PrintUsage();
                    return 1;
                }
                else
                {
                    throw std::runtime_error("unknown option '" + arg + "'");
                }
            }
            else if (StartsWith(arg, "-"))
            {
                std::string options = arg.substr(1);
                if (options.empty())
                {
                    throw std::runtime_error("unknown option '-" + arg + "'");
                }
                for (char o : options)
                {
                    if (o == 'h')
                    {
                        PrintUsage();
                        return 1;
                    }
                    else
                    {
                        throw std::runtime_error("unknown option '-" + std::string(1, o) + "'");
                    }
                }
            }
            else
            {
                xmlFileNames.push_back(arg);
            }
        }
        if (xmlFileNames.empty())
        {
            PrintUsage();
            return 1;
        }
        for (const std::string& xmlFileName : xmlFileNames)
        {
            std::cout << "> " << xmlFileName << std::endl;
            ContentHandler contentHandler;
            sxml::xml::ParseXmlFile(xmlFileName, &contentHandler);
        }
    }
    catch (const std::exception& ex)
    {
        std::cerr << ex.what() << std::endl;
        return 1;
    }
    return 0;
}
