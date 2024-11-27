#include <iostream>
#include <string>
using namespace std;

struct User {
    string name;  
};

bool login(User& user) {
    string correctUsername = "ifrah";  
    string enteredUsername;

    cout << "Enter your username: ";
    getline(cin, enteredUsername);  

    if (enteredUsername == correctUsername) {
        user.name = enteredUsername;  
        return true;  
    }
    return false;  
}

int main() {
    User currentUser;  

    if (login(currentUser)) {
        
        cout << "Welcome, " << currentUser.name << "! You have successfully logged in.\n";
    } else {
        
        cout << "Login failed. Incorrect username.\n";
    }

    return 0;
}
