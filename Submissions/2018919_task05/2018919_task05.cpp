#include <bits/stdc++.h>
using namespace std;
class student {
public:
  string name;
  string Class;
  int Roll;
  string Email;

  void setData() {
    cout << "Name : ";
    getline(cin,name);
    cout << "Class : ";
    getline(cin,Class);
    cout << "Roll Number : ";
    cin >> Roll;
    cout << "E-Mail : ";
    cin >> Email;
  }
  void returnData() {
    cout << "Your Name is : ";
    cout << name << endl;
    cout << "Your Class is : ";
    cout << Class << endl;
    cout << "Your Roll is : ";
    cout << Roll << endl;
    cout << "Your E-Mail is : ";
    cout << Email << endl;
  }
};

//Created By Jashanpreet Singh
int main() {
  student obj;
  obj.setData();
  obj.returnData();
  return 0;
}
