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
        int a, b, c;
        cin >> a >> b >> c;
        cout << n - min(a, min(b, c)) << endl;
    }
    return 0;
}