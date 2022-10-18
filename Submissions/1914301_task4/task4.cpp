#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        sum+=i;
    }
    cout<<"Sum upto "<<n<<" numbers are: "<<sum;
    return 0;
}