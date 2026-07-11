#include <iostream>
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
        int prefix1[n], prefix2[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                prefix1[i]++;
            }
        }
    }
    return 0;
}