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
        int left = 0, right = n - 1;
        int ans = 0;
        long long leftsum = arr[0], rightsum = arr[n - 1];
        while (left <= right)
        {
            if (left == right)
                break;
            while (leftsum < rightsum && left < right)
            {
                left++;
                if (left != right)
                    leftsum += arr[left];
            }
            while (rightsum < leftsum && left < right)
            {
                right--;
                if (left != right)
                    rightsum += arr[right];
            }
            if (rightsum == leftsum)
            {

                ans = left + 1 + n - right;
                if (left < right)
                {
                    left++;
                    if (left != right)
                        leftsum += arr[left];
                }
                else
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

/*
10 20 10
2 1 4 2 4 1
1 2 4 8 16
7 3 20 5 15 1 11 8 10
*/