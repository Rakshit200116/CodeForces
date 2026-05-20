#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end(), greater<int>());
        long long time = 0;
        for (long long i = n - 1; i >= 0; i--)
        {
            time += b - 1;
            b = min(v[i] + 1, a);
        }
        cout << time + b << endl;
    }
    return 0;
}