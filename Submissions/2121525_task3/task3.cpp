#include <iostream>
using namespace std;

int main(){
    // To print isocales triangle
    int n=5;

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int k=0;k<i;k++) cout<<"* ";
        cout<<endl;
    };
    return 0;
}
