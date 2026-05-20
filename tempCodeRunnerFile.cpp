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
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                temp++;
            arr[i] = temp;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] % arr[i] == 0)
                arr[i + 1] += 1;
        }
        for (int i = 0;i<n;i++) cout << arr[i] << " " ;
        cout << endl;
    }
    return 0;
}