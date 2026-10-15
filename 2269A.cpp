#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long ans = 0;
        int days = n - k + 1;
        int times = k - 1;
        ans += pow(2, days);
        ans += 2 * times;
        cout << ans << endl;
    }
    return 0;
}