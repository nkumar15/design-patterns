#include <iostream>
#include <memory>

using namespace std;

class Document
{
  public:
    virtual void open() = 0;
    virtual void close() = 0;
    string get_name()
    {
        return name;
    }
    Document(string _name) : name{_name} {}

  protected:
    string name;
};

class ExcelDocument : public Document
{
  public:
    ExcelDocument(string _name) : Document(_name) {}

    void open() override
    {
        cout << "Excel document " << name << " opened." << endl;
    }

    void close() override
    {
        cout << "Excel document " << name << " closed." << endl;
    }
};

class WordDocument : public Document
{
  public:
    WordDocument(string _name) : Document(_name) {}
    virtual void open()
    {
        cout << "Word document " << name << " opened." << endl;
    }

    virtual void close() override
    {
        cout << "Word document " << name << " closed." << endl;
    }
};

class DocumentFactory
{
  public:
    virtual shared_ptr<Document> create_document(string name) = 0;
};

class WordDocumentFactory : public DocumentFactory
{
  public:
    virtual shared_ptr<Document> create_document(string name) override
    {
        return make_shared<WordDocument>(name);
    }
};

class ExcelDocumentFactory : public DocumentFactory
{
  public:
    shared_ptr<Document> create_document(string name) override
    {
        return make_shared<ExcelDocument>(name);
    }
};

int main()
{
    auto document_factory = make_unique<WordDocumentFactory>();
    auto word_document = document_factory->create_document("MyWordDocument");
    word_document->open();
    word_document->close();

    auto excel_factory = make_unique<ExcelDocumentFactory>();
    auto excel_document = excel_factory->create_document("MyExcelDocument");
    excel_document->open();
    excel_document->close();
    return 0;
}
