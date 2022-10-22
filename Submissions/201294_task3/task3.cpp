#include <iostream>

using namespace std;

int main()
{
   int h;
   cout<<"Enter the height of triangle: ";
   cin>>h;
   
   for(int i=1;i<=h;i++){
       for(int j=1;j<2*h-(h-i);j++){
           if(j>h-i )
               cout<<"* ";
           else
           cout<<"  ";
       }cout<<endl;
   }

    return 0;
}
