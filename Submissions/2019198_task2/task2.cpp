#include <iostream>

using namespace std;

int main()
{
    //declare all the variables with different data types
    int a;
    double b;
    char c;
    short d;
    float e;

    //Using the sizeof() function to find the size of different data types..
    //NOTE: The results could be different on different machines
    cout<<"Size of data type (int) is :" <<sizeof(a)<<'\n';
    cout<<"Size of data type (double) is :" <<sizeof(b)<<'\n';
    cout<<"Size of data type (char) is :" <<sizeof(c)<<'\n';
    cout<<"Size of data type (short) is :" <<sizeof(d)<<'\n';
    cout<<"Size of data type (float) is :" <<sizeof(e)<<'\n';

    return 0;
}
