#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int left = 0, right = k;
        int ans = 0;
        while (right < n)
        {
            int multiplier = 2;
            for (int i = left; i < right; i++)
            {
            }
        }
    }
    return 0;
}