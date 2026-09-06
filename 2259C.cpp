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
        vector<int> v(n);
        int firstminusone = n, lastminusone = 0, firstone = n, lastone = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                firstone = min(firstone, i);
                lastone = max(lastone, i);
            }
            else if (v[i] == -1)
            {
                firstminusone = min(firstminusone, i);
                lastminusone = max(lastminusone, i);
            }
        }
        if (firstminusone < firstone)
            v[firstminusone] = 1;
        if (lastminusone > lastone)
            v[lastminusone] = 1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1)
                v[i] = 0;
        }
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}