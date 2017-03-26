#include <iostream>
using namespace std;

int main()
{
  int num1;         // first user entered number
  int num2;         // second user entered number
  int num3;         // third user entered number
  int smallest;     // smallest of the user entered numbers
  int largest;      // largest of the user entered numbers

  cout << "Input three different integers: ";
  cin >> num1 >> num2 >> num3;

  if ((num1 >= num2) && (num1 >= num3))
    largest = num1;
  else if ((num2 >= num1) && (num2 >= num3))
    largest = num2;
  else
    largest = num3;

  if ((num1 <= num2) && (num1 <= num3))
    smallest = num1;
  else if ((num2 <= num1) && (num2 <= num3))
    smallest = num2;
  else
    smallest = num3;

  cout << "Sum is " << num1 + num2 + num3 << endl
       << "Average is " << (num1 + num2 + num3) / 3.0 << endl
       << "Product is " << num1 * num2 * num3 << endl
       << "Smallest is " << smallest << endl
       << "Largest is " << largest << endl;

  return 0;
}
