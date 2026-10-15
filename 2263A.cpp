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
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                one++;
            else
                zero++;
        }
        if (zero <= one)
            cout << "Bessie" << endl;
        else
            cout << "Elsie" << endl;
        }
    return 0;
}