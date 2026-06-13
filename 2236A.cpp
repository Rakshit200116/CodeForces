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
        int maxh = 0;
        int minh = 7;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            maxh = max(maxh, temp);
            minh = min(temp, minh);
        }
        cout << maxh + 1 - minh << endl;
    }
    return 0;
}