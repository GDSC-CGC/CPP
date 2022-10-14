#include<bits/stdc++.h>

using namespace std;

int sumOfNumbers(int num) 
{
  int sum = 0;
  
  for (int i = 1; i <= num; i++)
  {
    //calculating the sun
    sum = sum + i;
  }
  
  //returning the total sum till n
  return sum;
  
}

int main() 
{
  int number;
  
  //taking input of the number
  cin>>number;
  
  //calling the function 
  //after the execution of the function, it will display output
  cout<<sumOfNumbers(number);
  
  return 0;
}
