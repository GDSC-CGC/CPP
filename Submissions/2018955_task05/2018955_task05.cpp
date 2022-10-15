#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
  
    string Name;
  
    string Class;
  
    int RollNo;
  
    string eMail;
  
    Student()
    {
        RollNo=0;
    }
  
    void get()
    {
      cout<<"Enter your name"<<endl;

      getline(cin, Name);

      cout<<"Enter your class"<<endl;
      
      getline(cin, Class);

      cout<<"Enter your Roll Number"<<endl;
      
      cin>>RollNo;

      cout<<"Enter your e-Mail"<<endl;
      
      cin>>eMail;
    }
    void display()
    {
        cout<<"Yout name is "<<this->Name<<endl;
      
        cout<<"Your class is "<<this->Class<<endl;
      
        cout<<"Your Roll Number is "<<this->RollNo<<endl;
      
        cout<<"Your e-Mail is "<<this->eMail<<endl;
    }
};

int main()
{
  //creating object of class Student
  Student s;
  
  //taking input
  s.get();
  
  //displaying output
  s.display();
  
  return 0;
}
