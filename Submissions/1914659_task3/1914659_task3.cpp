#include<iostream>
using namespace std;
 
int main(){
 //by 659
    int n = 5;
    
    for(int i=1;i<=5;i++){
        for(int k=0;k<n-i;k++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

   return 0;
}
