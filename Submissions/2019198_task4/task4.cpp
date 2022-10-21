#include <iostream>

using namespace std;

int returnSum(int n )
{
    int sum = 0;
    for(int i = 1; i<=n ; ++i)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n = 20 ;
    cout<<"Sum is: "<<returnSum(n);
    return 0;
}
