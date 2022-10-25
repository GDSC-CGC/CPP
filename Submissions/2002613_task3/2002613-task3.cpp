#include <iostream>
using namespace std;

int main()
{
    int space, rows;
  for(int i = 1, k = 0; i <= 5; ++i, k = 0)
    {
        for(space = 1; space <= 5-i; ++space)
        {
            cout <<"  ";
        }
    while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
