#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    for(int i = 0 ; i<n ; ++i)
    {
        int star = 2*i +1;
        int space = 2*n - star;
        int sp = space /2;

        while(sp--)
        {
            cout<<" ";
        }
        while(star--)
        {
            cout<<"*";
        }
        sp = space/2;
        while(sp--)
        {
            cout<<" ";
        }

        cout<<'\n';
    }
    return 0;
}
