#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> arr;
    vector<int> ans;
    int hash[51] = {0};
    int queries[q];
    for (int i = 1; i < n + 1; i++)
    {
        int temp;
        cin >> temp;
        if (hash[temp] == 0)
        {
            hash[temp] = i;
            arr.push_back({temp, i});
        }
    }
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    for (int i = 0; i < q; i++)
    {
        int index = -1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j].first == queries[i])
            {
                index = arr[j].second;
            }
        }
        ans.push_back(index);
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j].second < index)
            {
                arr[j].second += 1;
            }
            else if (arr[j].second == index)
                arr[j].second = 1;
        }
    }
    for (int i = 0; i < ans.size(); i++)

        cout << ans[i] << " ";
    cout << endl;
    return 0;
}