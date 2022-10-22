#include <iostream>
using namespace std;

int main()
{

    int i = 1;

    cout << " Print an isocelles trainge using stars";

    for (int a = 1; a <= 6; a++)
    {
        for (int b = 5 ;  b >= a; b--)
        {
            cout << " "; 
        }
        for (int c = 0; c < i; c++)
        {
            cout << "*"; 
        }
        cout << endl; 
        i = i + 2;
    }
}
