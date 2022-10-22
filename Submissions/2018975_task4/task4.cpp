#include <iostream>
using namespace std;
int sumUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
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
