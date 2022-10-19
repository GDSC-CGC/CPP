#include<iostream>
using namespace std;
int findSum(int [], int);
int main()
{
    int n, i, arr[50], sum;
    cout<<"Enter the value of n (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    sum = findSum(arr, n);
    cout<<"\nSum = "<<sum;
    cout<<endl;
    return 0;
}
int findSum(int arr[], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
        sum = sum+arr[i];
    return sum;
}
