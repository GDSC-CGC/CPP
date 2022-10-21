#include<bits/stdc++.h>
using namespace std;
   
   // program to print an isosceles triangle
  
int main()
{
    
    int e=1;

  

  for(int i=1;i<=5;i++)
 {
    for(int b=4;b>=i;b--)
   {
    cout<<" "; 
   }
      for(int c=0;c<e;c++)
     {
       cout<<"*"; 
     }
      cout<<endl;  
      e=e+2;
 }

  
}
