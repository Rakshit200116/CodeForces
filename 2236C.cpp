#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        int temp = max(a, b);
        b = min(a, b);
        a = temp;
        vector<int> avalue, bvalue;
        int ans = abs(a - b);
        while (a > 0)
        {
            avalue.push_back(a);
            a = a / x;
        }
        avalue.push_back(0);
        while (b > 0)
        {
            bvalue.push_back(b);
            b = b / x;
        }
        bvalue.push_back(0);
        for (int i = 0; i < avalue.size(); i++)
        {
            for (int j = 0; j < bvalue.size(); j++)
            {
                ans = min(ans, i + j + (abs(avalue[i] - bvalue[j])));
            }
        }
        cout << ans << endl;
    }
    return 0;
}