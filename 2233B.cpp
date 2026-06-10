#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << n << " ";
        for (int i = 1; i <= n; i++)
            cout << i << " " << i << " ";
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        for (int i = n - 1; i > 0; i--)
            cout << i << " ";
    }
    return 0;
}
