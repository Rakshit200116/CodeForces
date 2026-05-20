#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
      int temp = *a;
      *a = *b;
      *b = temp;
      cout << "Inside swap function: a = " << *a << ", b = " << *b << "\n";
}

int main()
{
      int x = 10;
      int y = 20;
      cout << "Before swap function: x = " << x << ", y = " << y << "\n";
      swap(&x, &y);
      cout << "After swap function: x = " << x << ", y = " << y << "\n";
      return 0;
}