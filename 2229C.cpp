#include <iostream>
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

        vector<int> arr(n);
        vector<int> ans;

        int positive = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] > 0)
                positive++;
        }

        int last = n - 1;

        while (last >= 0 && positive > 0)
        {
            if (arr[last] < 0)
            {
                last--;
                continue;
            }

            ans.push_back(last + 1);

            for (int i = 0; i < last; i++)
            {
                arr[i] = -arr[i];

                if (arr[i] > 0)
                    positive++;
                else
                    positive--;
            }

            positive--; // arr[last] itself removed
            last--;
        }

        cout << ans.size() << endl;

        for (int x : ans)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}