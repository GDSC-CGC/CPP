#include<iostream>
using namespace std;
class student{
  public:
  char name[100],clas[100],email[100] ;
  int roll;
  
      public:
      void input()
      {
      cout<<"Enter your Name: ";
      cin.getline(name,100);
      cout<<"Enter your Class: ";
      cin.getline(clas,100);
      cout<<"Enter your Roll No: ";
      cin>>roll;
      cout<<"Enter your E-Mail: ";
      cin>>email;
      }
      void output(){
      cout<<"\nYour Name: ";
      cout<<name<<endl;
      cout<<"Your Class: ";
       cout<<clas<<endl;
      cout<<"Your Roll No: ";
       cout<<roll<<endl;
      cout<<"Your E-Mail: ";
      cout<<email<<endl;
      }
     };
int main()
{
    student x;
    x.input();
    x.output();
    return 0;
}
    
