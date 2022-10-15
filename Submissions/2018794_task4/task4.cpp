// Program to print the sum upto n numbers

#include <iostream>
using namespace std;

int sumUptoN(int n)
{
    // Initialize the variable sum to zero
    int sum = 0;
    // Iterate from 1 to n and increment the value of sum with the current value
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    // Return the sum 
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = sumUptoN(n);
    cout << sum << endl;
    return 0;
}
