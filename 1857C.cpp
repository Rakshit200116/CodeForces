#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            int temp;
            cin >> temp;
            mp[temp]++;
        }
        int ans[n];
        int index = 0;
        int biggest = 0;
        for (auto x : mp)
        {
            biggest = max(biggest, x.first);
            while (x.second > 0)
            {
                ans[index] = x.first;
                x.second -= n - index - 1;
                index++;
            }
        }
        ans[n - 1] = biggest;
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}