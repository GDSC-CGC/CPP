#include <iostream>
using namespace std;
int main()
{
    int e=1;
    for(int a=1;a<=5;a++){
        for(int b=4;b>=a;b--){
            cout<<" ";  // Printing Space Here
        }
        for(int c=0;c<e;c++){
            cout<<"*";  // Printing asterisk here
        }
        cout<<endl;   // new line
        e=e+2;
    }
    
    return 0;
}
