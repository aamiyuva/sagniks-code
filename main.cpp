#include <iostream>

using namespace std;

int sumArray (int values[], int size)
{
  int sum = 0;
  for (int i =0; i < size; i++)
  {
    sum += values[ i ];
  }
  return sum;
}

int main ()
{
  int values[ 10 ];
  cout << "Hare Krishna !" << endl;
  cout << "Welcome to out program !" << endl;
  cout << "This program will add 5 numbers for you " << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << "Enter value " << i << ": ";
    cin >> values[ i ];
  }
  cout << sumArray(values, 5) << endl;
}
