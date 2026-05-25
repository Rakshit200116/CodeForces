#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define MOD (ll)(1e9 + 7)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<ll, ll>> a(n);
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            a[i].first = temp;
            a[i].second = 0;
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int pointer_a = 0, pointer_b = 0;
        while (pointer_a < n && pointer_b < n)
        {
            int a_value = a[pointer_a].first;
            while (pointer_b < n && b[pointer_b] < a_value)
                pointer_b++;
            a[pointer_a].second = pointer_b;
            pointer_a++;
        }
        while (pointer_a < n)
        {
            a[pointer_a].second = pointer_b;
            pointer_a++;
        }
        long long sum = 1;
        for (int i = 0; i < n; i++)
            sum = sum * max(a[i].second - i, 0LL) % MOD;
        cout << sum << endl;
    }
    return 0;
}

/*
9 6 8 4 5 2
4 1 5 6 3 1

2 4 5 6 8 9
1 1 3 4 5 6

2 - 2
4 - 3 - 1
5 - 4 - 2
6 - 5 - 3
8 - 6 - 4
9 - 6 - 5
*/