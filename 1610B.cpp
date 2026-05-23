#include <iostream>
#include <vector>
using namespace std;

int palindrome(vector<int> arr, int n)
{
    int check = 0, intr = 0;
    for (int i = 0; i < n / 2; i++)
    {
        intr++;
        if (arr[i] == arr[n - i - 1])
            check++;
    }
    if (check == intr)
        return 1;
    else
        return 0;
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
        int x = 0, y = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                x = arr[i];
                y = arr[n - i - 1];
                break;
            }
        }
        // remove every x from the array
        vector<int> arr_x;
        vector<int> arr_y;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != x)
                arr_x.push_back(arr[i]);
            if (arr[i] != y)
                arr_y.push_back(arr[i]);
        }
        if (palindrome(arr_x, arr_x.size()) || palindrome(arr_y, arr_y.size()))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
