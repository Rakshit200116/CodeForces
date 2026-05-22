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
        int count = 0;
        for (int i = 2 * n; i > n; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}