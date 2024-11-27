#include <iostream>
#include <string>
using namespace std;

struct StudentGrading {
    string name;         
    string sapID;        
    string address;      
    string department;   
    int marksSubject1;   
    int marksSubject2;   

    int calculateMaxMarks() {
        return (marksSubject1 > marksSubject2) ? marksSubject1 : marksSubject2;
    }

    void displayStudent() {
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "SAP ID: " << sapID << endl;
        cout << "Address: " << address << endl;
        cout << "Department: " << department << endl;
        cout << "Marks in Subject 1: " << marksSubject1 << endl;
        cout << "Marks in Subject 2: " << marksSubject2 << endl;
        cout << "Maximum Marks: " << calculateMaxMarks() << endl;
    }
};

int main() {
    const int numStudents = 5;  
    StudentGrading students[numStudents];  

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "SAP ID: ";
        getline(cin, students[i].sapID);

        cout << "Address: ";
        getline(cin, students[i].address);

        cout << "Department: ";
        getline(cin, students[i].department);

        cout << "Marks for Subject 1: ";
        cin >> students[i].marksSubject1;

        cout << "Marks for Subject 2: ";
        cin >> students[i].marksSubject2;

        cin.ignore();  
    }

    for (int i = 0; i < numStudents; i++) {
        students[i].displayStudent();  
    }

    return 0;
}
