#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vector<int> x;
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int temp;
                cin >> temp;
                x.push_back(temp);
            }
            v.push_back(x);
        }
        vector<pair<int, int>> minm;
        for (int i = 0; i < n; i++)
        {
            int temp = INT_MIN;
            int size = v[i].size();
            for (int j = 0; j < size; j++)
            {

                temp = max(temp, v[i][j] - j);
            }
            minm.push_back({temp + 1, size});
        }
        sort(minm.begin(), minm.end());

        int start = minm.back().first;
        for (int i = n - 2; i >= 0; i--)
        {
            start -= minm[i].second;
            if (start < minm[i].first)
                start = minm[i].first;
        }
        cout << start << endl;
    }
    return 0;
}