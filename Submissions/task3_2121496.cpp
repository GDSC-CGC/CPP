#include<iostream>
using namespace std;

int main()
{
    int e=1;
    cout<<"\" Triangle Shape SHAPE \":\n\n";

    for(int a=1;a<=5;a++)
    {
        for(int b=4;b>=a;b--)
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
