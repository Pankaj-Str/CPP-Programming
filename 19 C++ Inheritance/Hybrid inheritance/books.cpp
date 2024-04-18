#include<iostream>

using namespace std;

    // Hybrid Inheritance


class Book{
    public:
        void bookFunction(){
            cout << "Book Function" << endl;
        }
};

class Author{
    public:
        void authorFunction(){
            cout << "Author Function" << endl;
        }
};

class Publisher{
    public:
        void publisherFunction(){
            cout << "Publisher Function" << endl;
        }
};

class BookDetails : public Book , public Author , public Publisher{
    public:
        void bookDetailsFunction(){
            cout << "Book Details Function" << endl;
        }
};

class price : public BookDetails{
    public:
        void priceFunction(){
            cout << "Price Function" << endl;
        }
};

int main(){
    price p;
    p.bookFunction();
    p.authorFunction();
    p.publisherFunction();
    p.bookDetailsFunction();
    p.priceFunction();
    return 0;
}