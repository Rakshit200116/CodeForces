#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n * k + 1];
        int lim = ceil(n / 2);
        for (int i = 1; i < n * k + 1; i++)
            cin >> arr[i];
        int index = n * k;
        long long sum = 0;
        while (k--)
        {
            index -= lim;
            lim = ceil(n / 2) + 1;
            sum += arr[index];
        }
        cout << sum << endl;
    }
    return 0;
}