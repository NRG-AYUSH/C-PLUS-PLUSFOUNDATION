#include <iostream>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int copies;

public:
    Book(string t = "Untitled", string a = "Unknown", int c = 0)
    {
        title = t;
        author = a;
        copies = c;
    }
    string getTitle() const
    {
        return title;
    }
    string getAuthor()
        const
    {
        return author;
    }
    int getCopies() const
    {
        return copies;
    }
    void setCopies(int c)
    {
        if (c >= 0)
        {
            copies = c;
        }
    }
};
void issueBook(Book &b)
{
    if (b.getCopies() > 0)
    {
        b.setCopies(b.getCopies() - 1);
        cout << "BOOK ISSUED SUCCESSFULLY" << endl;
    }
    else
    {
        cout << "ERROR,NO COPIES LEFT" << endl;
    }
}
void returnBook(Book &b)
{
    b.setCopies(b.getCopies() + 1);
}
void printBookDetails(const Book &b)
{
    cout << "NAME OF THE BOOK: "<<b.getTitle() << "\n";
    cout <<"Author:" <<b.getAuthor() << "\n";
    cout << "NUMBER OF COPIES AVAILABLE: "<<b.getCopies() << "\n";
}
int main()
{
    Book Hi[3] = {Book("C++ Primer", "Lippman", 2),
                  Book("Clean Code", "Robert Martin", 1),
                  Book("The Pragmatic Programmer", "Andrew Hunt", 0)};
    cout << "--- Initial Library Status ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        printBookDetails(Hi[i]);
    }
    cout << "\n--- Transactions ---" << endl;
    // Issue one copy of "C++ Primer" (Hi[0])
    issueBook(Hi[0]);

    // Try issuing a book with 0 copies (Hi[2])
    issueBook(Hi[2]);

    // Return a copy of "Clean Code" (Hi[1])
    returnBook(Hi[1]);
    cout << "\n--- Updated Library Status ---" << endl;
    for (int i = 0; i < 3; i++)
    {
        printBookDetails(Hi[i]);
    }

    return 0;
}
