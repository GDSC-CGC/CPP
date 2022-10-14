// Program to print a isosceles triangle using stars "*"

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of triangle: ";
    cin >> n;
    int numOfSpaces = n;
    for (int i = 0; i < n; i++)
    {
        // First, print the initial spaces
        for (int j = numOfSpaces - 1; j >= 0; j--)
        {
            cout << " ";
        }
        // Then, print the stars in that row
        for (int j = 0; j <= i * 2; j++)
        {
            cout << "*";
        }
        // Then, decrease the number of spaces for the next row
        numOfSpaces--;
        cout << endl;
    }
    return 0;
}
