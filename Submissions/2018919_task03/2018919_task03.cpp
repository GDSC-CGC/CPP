#include <bits/stdc++.h>
using namespace std;

int main() {

  int count = 6;

  for (int i = 0; i <= count; i++) {

    for (int m = 0; m < count - i; m++) {
      cout << " ";
    }
    for (int l = 0; l < i; l++) {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  return 0;
}
