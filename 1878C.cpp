#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long min_sum = 0, max_sum = 0;
        min_sum = k * (k + 1) / 2;
        long long new_int = n - k;
        max_sum = (n * (n + 1) / 2) - (new_int * (new_int + 1) / 2);
        if (min_sum > x || max_sum < x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}