#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long sum = 0;
    long long weeks = n - k + 1;
    long long arr[n];
    for (int i = 1; i < n + 1; i++)
    {
        long long temp;
        cin >> temp;
        if (i <= min(k, weeks))
        {
            sum += temp * i;
            // cout << i << endl;
        }
        else if (n - min(k, weeks) < i && i <= n)
        {
            sum += temp * (n - i + 1);
            // cout << n - i + 1 << endl;
        }
        else
            sum += temp * min(k, weeks);
    }
    // cout << sum << " " << weeks << endl;
    printf("%.6f\n", (double)sum / weeks);

    return 0;
}