#include<iostream>
#include<string>
using namespace std;

class book
{
public:
    int bookno;
    string name;

    book()
    {
        bookno = 0;
        name = "";
    }

    void getData()
    {
        cout << "Enter the book no: ";
        cin >> bookno;
        cin.ignore();
        cout << "Enter the book name: ";
        getline(cin, name);
    }

    void display()
    {
        cout << "Book no: " << bookno << endl;
        cout << "Book name: " << name << endl;
    }
};

int main()
{
    book b1, b2;

    cout << "--- Book 1 ---" << endl;
    b1.getData();

    cout << "--- Book 2 ---" << endl;
    b2.getData();

    cout << "\n--- Displaying Details ---" << endl;
    b1.display();
    b2.display();

    return 0;
}
