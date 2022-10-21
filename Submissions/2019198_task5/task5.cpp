#include <iostream>

using namespace std;

class Student
{
private:
    string m_name;
    string m_class;
    string m_rollNo;
    string m_email;

public:
    Student(string name , string clas, string rollNo, string email )
    :m_name{name}, m_class{clas}, m_rollNo{rollNo}, m_email{email}
    {

    }

    string getName()
    {
        return m_name;
    }
    string getClass()
    {
        return m_class;
    }
    string getRollNo()
    {
        return m_rollNo;
    }
    string getEmail()
    {
        return m_email;
    }
};
int main()
{
    Student student("Aasif" , "Btech CSE", "2019198", "aasif45@gmail.com");

    cout<<"Student Name: "<<student.getName()<<'\n';
    cout<<"Student Class: "<<student.getClass()<<'\n';
    cout<<"Student RollNo: "<<student.getRollNo()<<'\n';
    cout<<"Student Email: "<<student.getEmail()<<'\n';
    return 0;
}
