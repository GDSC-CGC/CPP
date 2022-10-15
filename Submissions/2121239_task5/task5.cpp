#include<iostream>
using namespace std;
class student{
  public:
  char name ;
  char clas ;
    int Roll;
      char Email;
      public:
      void input()
      {cout<<"Enter your Name"<<endl;
      cin>>name;
      cout<<"Enter your Class"<<endl;
      cin>>clas;
      cout<<"Enter your Roll"<<endl;
      cin>>Roll;
      cout<<"Enter your E-Mail"<<endl;
      cin>>Email;
      }
      void output(){
          cout<<" Your Name"<<endl;
      cout<<name<<endl;
      cout<<"Enter your Class"<<endl;
       cout<<clas<<endl;
      cout<<"Enter your Roll"<<endl;
       cout<<Roll<<endl;
      cout<<"Enter your E-Mail"<<endl;
      cout<<Email<<endl;
      }
};
int main()
{
    student a;
    a.input();
    a.output();
    return 0;}
    
