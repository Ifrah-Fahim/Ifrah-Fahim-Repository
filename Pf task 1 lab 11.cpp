#include <iostream>
#include <string>
using namespace std;


struct Book {
    string title;
    string author;
    int year;
    int pages;
};

int main() {
    Book books[5]; 

    
    for (int i = 0; i < 5; i++) {
        cout << "\nPlease enter details for book " << i + 1 << ":\n";
        
        cout << "Title: ";
        getline(cin, books[i].title);  

        cout << "Author: ";
        getline(cin, books[i].author); 

        cout << "Year of Publication: ";
        cin >> books[i].year;

        cin.ignore();

        cout << "Number of Pages: ";
        cin >> books[i].pages;

        cin.ignore();  
    }

    
    cout << "\nHere is the information for all the books:\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nBook " << i + 1 << " details:\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year of Publication: " << books[i].year << endl;
        cout << "Number of Pages: " << books[i].pages << endl;
    }

    return 0;
}
