#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int Class; 
    int rollNo;
    char email[100];
};
//MAKE A CLASS WHICH RETURNS THE STDENT DATA:WHICH INCLUDES NAME,CLASS,ROLL NO. ,E-MAIL.

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout <<"Enter class" ; 
    cin >> s.Class ; 
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter E-mail ";
    cin >> s.email;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Class" << s.Class << endl ; 
    cout << "Roll: " << s.rollNo << endl;
    cout << "email: " << s.email << endl;
    
    return 0;
}
