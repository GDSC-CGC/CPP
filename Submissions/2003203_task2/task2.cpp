#include<iostream>
using namespace std;

int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;
    bool boolType;


    cout<<"Size of int: "<< sizeof(intType)<<" bytes"<<endl;
    cout<<"Size of float: "<< sizeof(floatType)<<" bytes"<<endl;
    cout<<"Size of double: "<< sizeof(doubleType)<<" bytes"<<endl;
    cout<<"Size of char: "<< sizeof(charType)<<" bytes"<<endl;
    cout<<"Size of bool: "<< sizeof(boolType)<<" bytes"<<endl;

    return 0;
}
