#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> v;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= i + 1)
                continue;
            ans += (long long)(lower_bound(v.begin(), v.end(), arr[i]) - v.begin());
            v.push_back(i + 1);
        }
        cout << ans << endl;
    }
    return 0;
}