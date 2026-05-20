// this file has been made to check out the size of different data types in C++
#include <iostream>
using namespace std;

int main()
{
      union GFG
      {
            int i;
            char c;
            double d;
      };

      GFG var;
      var.d = 3.14;
      var.i = 3;
      cout << var.i << " " << var.d;
}