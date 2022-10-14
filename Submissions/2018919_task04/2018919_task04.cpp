#include <bits/stdc++.h>
using namespace std;

int sumOfnNumbers(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++)
    sum += i;
  return sum;
}

//Created by Jashanpreet Singh
int main() {
  int num;
  cout << "Enter Number here : ";
  cin >> num;
  cout << "Sum of Numbers upto " << num << " is : " << sumOfnNumbers(num);
  return 0;
}
