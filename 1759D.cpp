#include <iostream>
#include <cmath>
using namespace std;

int count2(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            ans++;
        }
        else
            break;
        n /= 2;
    }
    return ans;
}

int count5(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 5 == 0)
            ans++;
        else
            break;
        n /= 5;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        int cnt2 = count2(n), cnt5 = count5(n);
        long long ans = 0;
        for (int i = 0; i <= 18; i++)
        {
            int target = i;
            int need2 = max(0, target - cnt2), need5 = max(0, target - cnt5);
            if (pow(2, need2) * pow(5, need5) <= m)
            {
                int need = pow(2, need2) * pow(5, need5);
                if (need == 0)
                    continue;
                long long k = m - (m % (need));
                ans = n * k;
            }
        }
        cout << ans << endl;
    }
    return 0;
}