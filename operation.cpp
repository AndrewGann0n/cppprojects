// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int number1, number2;
  
  cout << "Enter two whole numbers: " << "\n";
  
  cin >> number1;
  cin >> number2;
  
  double operation;
  
  float remainder;
  
  operation = (number1 / number2);
  
  remainder = number1 % number2;
  
  cout << "The whole number is: " << operation << " " << "The remainder is: " << remainder << "\n";
  
  return 0;
  
  
}