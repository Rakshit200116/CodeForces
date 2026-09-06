#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int bea[n], ver[m];
        for (int i = 0; i < n; i++)
            cin >> bea[i];
        for (int i = 0; i < m; i++)
            cin >> ver[i];
        long long giant_one = 0;
        for (int i = 0; i < n - 1; i++)
        {
            giant_one += bea[i] - bea[i + 1] + 1;
        }
        giant_one += bea[n - 1];
        long long giant_two = 0;
        for (int i = 0; i < m - 1; i++)
        {
            giant_two += ver[i] - ver[i + 1] + 1;
        }
        giant_two += ver[m - 1];
        cout << (giant_one >= giant_two ? 1 : 2) << endl;
    }
    return 0;
}