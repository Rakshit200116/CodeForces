#include <iostream>
using namespace std;
#include <map>
#include <cmath>

map<int, int> function(int n)
{
    map<int, int> mp;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                mp[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
        mp[n]++;
    return mp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp = function(n);
        if (mp.size() == 1)
        {
            int power = mp.begin()->second;
            if (power >= 6)
            {
                cout << "YES" << endl;
                int number = mp.begin()->first;
                cout << pow(number, 1) << " " << pow(number, 2) << " " << pow(number, power - 3) << endl;
            }
            else
                cout << "NO" << endl;
        }
        else if (mp.size() >= 3)
        {
            cout << "YES" << endl;
            auto sec = mp.begin();
            sec++;
            cout << pow(mp.begin()->first, mp.begin()->second) << " " << pow(sec->first, sec->second) << " ";
            long long third = 1;
            sec++;
            for (; sec != mp.end(); ++sec)
            {
                // cout << sec->first << " " << sec->second << endl;
                third *= pow(sec->first, sec->second);
            }
            cout << third << endl;
        }
        else
        {
            auto it = mp.begin();
            int pow1 = it->second;
            int num1 = it->first;
            it++;
            int pow2 = it->second;
            int num2 = it->first;
            if (max(pow1, pow2) >= 6)
            {
                cout << "YES" << endl;
                if (pow1 >= pow2)
                {
                    cout << pow(num1, 1) << " " << pow(num1, 2) << " " << pow(num1, pow1 - 3) * pow(num2, pow2) << endl;
                }
                else
                {
                    cout << pow(num2, 1) << " " << pow(num2, 2) << " " << pow(num2, pow2 - 3) * pow(num1, pow1) << endl;
                }
            }
            else if (pow1 >= 2 && pow2 >= 2)
            {
                cout << "YES" << endl;
                cout << num1 << " " << num2 << " " << pow(num1, pow1 - 1) * pow(num2, pow2 - 1) << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}