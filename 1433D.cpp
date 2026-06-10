#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }
        int count = 0;
        for (int i = 0; i < n - 1; i++)
            if (arr[i].first == arr[i + 1].first)
                count++;
        if (count == n - 1)
            cout << "NO" << endl;
        else
        {
            sort(arr.begin(), arr.end());
            cout << "YES" << endl;
            int path = n;
            int first = arr[0].first;
            int index = 1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i].first != first)
                {
                    cout << arr[0].second << " " << arr[i].second << endl;
                    path--;
                }
            }
            while (path && index < n)
            {
                if (index < n && arr[index].first == first)
                {

                    for (int i = index + 1; i < n; i++)
                    {
                        if (arr[i].first != first)
                        {

                            cout << arr[index].second << " " << arr[i].second << endl;
                            path--;
                            break;
                        }
                    }
                }
                index++;
            }
        }
    }
    return 0;
}

/*
1 2 2 1 3
1 1000 101 1000
1 2 3 4
*/