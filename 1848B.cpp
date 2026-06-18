#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<vector<int>> index(k + 1);
        for (int i = 0; i < n; i++)
            index[arr[i]].push_back(i);

        int ans = n;
        for (int i = 1; i <= k; i++)
        {
            vector<int> &paint_index = index[i];

            if (paint_index.empty())
                continue; // ✅ skip colors not in arr

            priority_queue<int> gaps;
            gaps.push(paint_index[0]);

            for (int j = 1; j < (int)paint_index.size(); j++)
                gaps.push(paint_index[j] - paint_index[j - 1] - 1);

            gaps.push(n - paint_index.back() - 1);

            int max_jump = gaps.top();
            gaps.pop();
            if (max_jump % 2 == 0)
            {
                gaps.push(max_jump / 2);
                gaps.push((max_jump / 2) - 1);
            }
            else
            {
                gaps.push(max_jump / 2);
                gaps.push(max_jump / 2);
            }
            ans = min(ans, gaps.top());
        }
        cout << ans << "\n";
    }
    return 0;
}