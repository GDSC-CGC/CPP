#include<bits/stdc++.h> 
using namespace std;
//make a function to print the sum upto n natural numbers 
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++) 
        sum+=i;
    cout << sum;
}
int main()
{
    int n;
    cout << "Enter a number upto which we want sum  : "; 
    cin >> n;
    sum(n); 
    return 0;
}
