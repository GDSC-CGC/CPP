#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  
  //taking input of the length of side(equal) of the isosceles triangle
  cin>>n;
  
  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<n-i; j++) 
    {
      cout<<" ";
    }
    
    for(int k=0;k<i;k++) 
    {
      cout<<"* ";
    }
      cout<<endl;
  }
  
  return 0;
  
}
