#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b)
        {
            a += c;
        }
        else
        {
            if (abs(a + c - b) > abs(a - b))
                a += c;
        }
        cout << abs(a - b) << endl;
    }
    return 0;
}