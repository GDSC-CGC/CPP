#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string Name;
    string Class;
    int Rollno;
    string Email;
    Student(){
        Rollno=0;
    }
    void get(){
        
    }
    void Display(){
        cout<<"Name : "<<this->Name<<endl;
        cout<<"Class : "<<this->Class<<endl;
        cout<<"Rollno : "<<this->Rollno<<endl;
        cout<<"Email : "<<this->Email<<endl;
    }
};
int main()
{
    Student s;
    s.Name="Gourav";
    s.Class="B";
    s.Rollno=2018898;
    s.Email="garggourav012@gmail.com";
    s.Display();
    return 0;
}
