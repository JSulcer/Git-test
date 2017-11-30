// Author: Jon Sulcer
// Date: 11/30/17
// File: main.cpp
// Description: Hello World!

#include <iostream>
using namespace std;

int sum(int n);

int main(){
  cout << "Hello World!" << endl;

  cout << "Enter the number n: ";
  int n;
  cin >> n;

  cout << "Returning sum of numbers 1 to n: " << sum(n) << endl;
  return 0;
}

int sum(int n){
  int total = 0;
  for(int i = 1; i <= n; i++)
    total += i;
  return total;
}
