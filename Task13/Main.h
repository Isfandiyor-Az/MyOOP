#include <iostream>
#include <string>
using namespace std;
class Book{
    public: 
    Book(){ // Default Constructor 
        bookID=0;
        title = "Unknow";
        author = "Unknow";
        price =0.0;
    }
    Book(int a,string b,string c,float d){ // Parameterized Constructors
        bookID=a;
        title = b;
        author = c;
        price =d;
    }
    ~Book(){ // Destructors
        cout<<"The book is deleted"<<endl;
    }
    void Display(); // Prototype
    private: 
    int bookID;// Class members
    string title;
    string author;
    float price;
};

void Book::Display(){ // Display output
    cout<<"BookID is "<<bookID<<endl;
    cout<<"Title is "<<title<<endl;
    cout<<"Author is "<<author<<endl;
    cout<<"Price is "<<price<<endl;
}