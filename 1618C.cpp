#include <iostream>
#include <vector>
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
        vector<long long> arr1, arr2;
        long long gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            if (i % 2 == 0)
            {
                arr1.push_back(temp);
                gcd1 = __gcd(gcd1, temp);
            }
            else
            {
                arr2.push_back(temp);
                gcd2 = __gcd(gcd2, temp);
            }
        }
        int x = 0, y = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            if (arr1[i] % gcd2 == 0)
                x++;
        }
        for (int i = 0; i < arr2.size(); i++)
        {
            if (arr2[i] % gcd1 == 0)
                y++;
        }
        if (x && y)
            cout << 0 << endl;
        else
        {
            if (x == 0)
                cout << gcd2 << endl;
            else
                cout << gcd1 << endl;
        }
    }
    return 0;
}