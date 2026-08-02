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
        int negative = 0, positive = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp < 0)
                negative++;
            else
                positive++;
        }
        if (n == 2 && (negative == 0 || positive == 0))
            cout << "NO" << endl;
        else if (abs(negative - positive) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}