#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long sum[s.size()];
    sum[0] = 0;
    int x = 0;
    vector<int> o_index;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'v' && s[i + 1] == 'v')
            x++;
        else if (s[i] == 'o')
            o_index.push_back(i);
        sum[i + 1] = x;
    }
    long long ans = 0;
    for (int i = 0; i < o_index.size(); i++)
    {
        int index = o_index[i];
        long long wow = (sum[index]) * (sum[s.size() - 1] - sum[index]);
        ans += wow;
    }
    cout << ans << endl;
    return 0;
}