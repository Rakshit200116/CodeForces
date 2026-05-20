#include <iostream>
#include <cmath>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int ans[n];
      for (int i = 0; i < n; i++)
      {
            int a, b;
            cin >> a >> b;
            int layer = 0;
            int max_layer = log2(a + b - 1);
            cout << max_layer;
            int kg_layer = pow(2, layer);
      }
      return 0;
}