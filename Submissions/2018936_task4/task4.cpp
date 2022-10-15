#include<iostream>
using namespace std;
   
   // program to print sum upto n numbers
   int addfunc(int n){
       int sum = 0;
       for(int i = 1;i<=n;i++){
           sum+= i;
           
       }
       return sum;
   }
int main()
{
    int n;
    cin>>n;
    cout<<addfunc(n);
  return 0;
}
