#include <iostream>
#include <algorithm>
using namespace std;

int palindrome(int *arr, int n)
{
    int ans = 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
            ans = 0;
    }
    return ans;
}

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
        if (palindrome(arr, n))
            cout << 0 << endl;
        else
        {
            int gcd = 0;
            for (int i = 0; i < n / 2; i++)
                gcd = __gcd(gcd, abs(arr[i] - arr[n - i - 1]));
            cout << gcd << endl;
        }
    }

    return 0;
}