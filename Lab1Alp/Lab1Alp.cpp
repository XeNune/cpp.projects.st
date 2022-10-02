#include <iostream>
#include <vector>
#include <string>
using namespace std;

// true - tech, false - civil
class Book
{
public:
    Book() = delete;
    Book(string new_name, string new_autor, bool new_type)
       : name(new_name)
        , autor(new_autor)
        , type(new_type)
    {    }

    string get_name() { return name; }
    string get_autor() { return autor; }
    bool get_type() { return type; }
    ~Book(){}
private:
    string name;
    string autor;
    bool type;
};

class Library
{
public:
    bool feed_lib(Book b)
    {
        if (b.get_name() == "" || b.get_autor() == "")
        {
            cout << "name or autor: invalid data" << endl;
            return false;
        }
        libr.push_back(b);
    }

    // print number of book with choosen type
    void write_num_of_type()
    {
        int tech_counter = 0;
        int civil_counter = 0;
        for (int i = 0; i < libr.size(); i++)
        {
            switch (libr[i].get_type())
            {
            case true:  // true - tech
                tech_counter++;
                break;
            case false:
                civil_counter++;
                break;
            }
        }
        cout << "tech_counter = " << tech_counter << endl;
        cout << "civil_counter = " << civil_counter << endl;
    }

    //void write_num()
    //{
    //    int tech_counter = 0;
    //    for (int i = 0; i < libr.size(); i++)
    //    {
    //        if (libr[i].get_type()) // == true - tech
    //        {
    //            tech_counter++;
    //        }
    //    }
    //    cout << "tech_counter = " << tech_counter << endl;
    //    cout << "civil_counter = " << libr.size() - tech_counter << endl;
    //}

private:
    vector<Book> libr;
};

int main()
{
    Book bk1("Glad To See", "J.R. Tom", true);
    Book bk2("Happy To You", "K.K. Dugs", false);
    Book bk3("Red Hot Chilly Pepper", "M.R. Tim", true);

    Library lib;
    lib.feed_lib(bk1);
    lib.feed_lib(bk2);
    lib.feed_lib(bk3);

    lib.write_num_of_type();
    //lib.write_num();

    return 0;
}