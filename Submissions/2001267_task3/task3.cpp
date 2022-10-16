#include<iostream>
using namespace std;
 
int main(){
 
    int a = 5;
    for(int i=1;i<=5;i++){
        for(int j=0;j<a-i;j++){
            cout<<" ";
        }
        for(int m=0;m<i;m++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
   return 0;
}