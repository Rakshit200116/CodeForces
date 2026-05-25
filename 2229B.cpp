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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int temp;
        int amax = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
            amax = max(amax, a[i]);
            sum += b[i];
        }
        cout << amax + sum << endl;
    }
    return 0;
}