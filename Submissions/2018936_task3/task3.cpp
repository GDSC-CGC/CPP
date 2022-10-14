#include<iostream>
using namespace std;
   
   // program to print an isosceles triangle
int main()
{

  int e=1;

  

  for(int i=1;i<=5;i++)
 {
    for(int j=4;j>=i;j--)
   {
    cout<<" "; 
   }
      for(int k=0;k<e;k++)
     {
       cout<<"*";  
     }
      cout<<endl;   
      e=e+2;
 }
}
