#include <iostream>
using namespace std;

int sumOfN(int n){
    int total=0;
    for(int i=1;i<=n;i++) total+=i;
    return total;
}
int main(){
    int n;
    cout<<"Enter value of n here: ";
    cin>>n;
    cout<<"Sum upto n is: "<<sumOfN(n);
    return 0;
}