#include <iostream>
#include <vector>
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<long long> even(n, 0), odd(n, 0);
        even[0] = arr[0];
        bool ans = false;
        map<long long, int> mp;
        mp[odd[0] - even[0]]++;
        for (int i = 1; i < n; i++)
        {
            even[i] += even[i - 1];
            odd[i] += odd[i - 1];
            if (i % 2 == 0)
                even[i] += arr[i];
            else
                odd[i] += arr[i];
            mp[odd[i] - even[i]]++;
            if (mp[odd[i] - even[i]] == 2 || odd[i] - even[i] == 0)
            {
                ans = true;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}