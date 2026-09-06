#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp % 2 != 0)
                odd++;
            else
                v.push_back(temp);
        }
        int multiple = 0, nonmultiple = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 4 == 0)
                multiple++;
            else
                nonmultiple++;
        }
        cout << max(odd, max(multiple, nonmultiple)) << endl;
    }
    return 0;
}