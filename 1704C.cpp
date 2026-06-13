#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v, gaps;
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < m - 1; i++)
        {
            gaps.push_back(v[i + 1] - v[i] - 1);
        }
        gaps.push_back(v[0] + n - v[m - 1] - 1);

        sort(gaps.begin(), gaps.end(), greater<int>());
        long long saved = 0, days = 0;

        for (int i = 0; i < gaps.size(); i++)
        {
            int gap = gaps[i];
            gap -= days * 2;
            if (gap > 0)
            {
                if (gap == 1)
                {
                    saved++;
                    days++;
                }
                else
                {
                    saved += gap - 1;
                    days += 2;
                }
            }
        }
        cout << n - saved << endl;
    }
    return 0;
}