#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> two, three, others, sixs;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 6 == 0)
                sixs.push_back(v[i]);
            else if (v[i] % 3 == 0)
            {
                three.push_back(v[i]);
            }
            else if (v[i] % 2 == 0)
            {
                two.push_back(v[i]);
            }
            else
            {
                others.push_back(v[i]);
            }
        }
        for (int i = 0; i < sixs.size(); i++)
            cout << sixs[i] << " ";
        for (int i = 0; i < two.size(); i++)
            cout << two[i] << " ";
        for (int i = 0; i < others.size(); i++)
            cout << others[i] << " ";
        for (int i = 0; i < three.size(); i++)
            cout << three[i] << " ";
        cout << endl;
    }
    return 0;
}