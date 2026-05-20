#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<pair<int, long long>> sum;
        long long sum_var = 0;
        for (int i = 1; i < n + 1; i++)
        {
            int temp;
            cin >> temp;
            sum_var += temp;
            sum.push_back({sum_var, i});
        }
        for (int i = 0; i < q; i++)
        {
            int odd_sum = sum_var;
            int l, r, k;
            cin >> l >> r >> k;
            if (l - 2 >= 0)
                odd_sum = odd_sum - sum[r - 1].first + sum[l - 2].first;
            else
                odd_sum = odd_sum - sum[r - 1].first;

            odd_sum += k * (r - l + 1);
            cout << (odd_sum % 2 == 0 ? "NO" : "YES") << endl;
        }
    }
    return 0;
}