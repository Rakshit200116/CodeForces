#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    vector<double> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    double ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        ans = max(ans, (arr[i] - arr[i - 1]) / 2.0);
    }

    ans = max(ans, (double)l - arr[n - 1]);

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}