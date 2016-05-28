#include <iostream>
#include <memory>

using namespace std;

class Document
{
public:
    virtual void open() = 0;
    virtual void close() = 0;
    string get_name() { return name; }
    Document(string _name) : name(_name){}
protected:
    string name;

};

class ExcelDocument : public Document
{
public:
    ExcelDocument(string _name) : Document(_name){}

    void open() override
    {
        cout<<"Excel document "<< name<< " opened."<<endl;
    }

    void close() override
    {
        cout<<"Excel document "<< name<< " closed."<<endl;
    }
};

class WordDocument : public Document
{
public:
    WordDocument(string _name): Document(_name){}
    virtual void open()
    {
        cout<<"Word document "<< name<< " opened."<<endl;
    }

    virtual void close() override
    {
        cout<<"Word document "<< name<< " closed."<<endl;
    }
};

class DocumentFactory
{
public:
    virtual Document* create_document(string name) = 0;
};

class WordDocumentFactory : public DocumentFactory
{
public:
    virtual Document* create_document(string name) override
    {
        return new WordDocument(name);
    }
};

class ExcelDocumentFactory : public DocumentFactory
{
public:
    Document* create_document(string name) override
    {
        return new ExcelDocument(name);
    }
};

int main()
{

    {
        unique_ptr<DocumentFactory> factory(new WordDocumentFactory());
        unique_ptr<Document> doc (factory->create_document("MyWordDocument"));
        doc->open();
        doc->close();
    }

    {
        unique_ptr<DocumentFactory> factory(new ExcelDocumentFactory());
        unique_ptr<Document> doc(factory->create_document("MyExcelDocument"));
        doc->open();
        doc->close();;
    }

    return 0;
}
