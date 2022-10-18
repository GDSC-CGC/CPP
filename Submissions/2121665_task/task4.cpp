#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter NUmber"<<endl;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=ans+i;
    }
    cout<<ans<<endl;
    return 0;
}
