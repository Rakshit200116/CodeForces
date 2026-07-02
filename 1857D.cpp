#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long high = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            b[i] = a[i] - temp;
            high = max(high, b[i]);
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == high)
            {
                ans.push_back(i + 1);
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}