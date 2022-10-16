#include<iostream>
using namespace std;
 
int main(){
 
    int x = 5;
    for(int a=1;a<=5;a++){
        for(int b=0;b<x-a;b++){
            cout<<" ";
        }
        for(int c=0;c<a;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
   return 0;
}