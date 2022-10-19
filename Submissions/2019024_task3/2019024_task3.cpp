#include<iostream>
using namespace std;

int main()
{
  for(int i=1;i<=5;i++)
 {
    for(int j=4;j>=i;j--) {
    cout<<" "; 
    }
      for(int c=1;c<=(2*i-1);c++) {
          cout<<"*"; 
      }
      cout<<endl;  
 }
}
