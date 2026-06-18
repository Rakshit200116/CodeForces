#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> v(n);

        for (long long i = 0; i < n; i++)
            for (long long j = 0; j < m; j++)
            {
                long long temp;
                cin >> temp;
                v[i].push_back(temp);
            }
        vector<vector<long long>> col(m);
        for (long long i = 0; i < m; i++)
        {
            for (long long j = 0; j < n; j++)
            {
                col[i].push_back(v[j][i]);
            }
            sort(col[i].begin(), col[i].end());
        }
        long long ans = 0;
        for (long long i = 0; i < m; i++)
        {
            long long sum = 0;
            for (long long j = 0; j < n; j++)
            {
                ans += (col[i][j] * j);
                ans -= sum;
                sum += col[i][j];
            }
        }
        cout << ans << endl;
    }
    return 0;
}