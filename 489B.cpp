#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int boys[n];
    for (int i = 0; i < n; i++)
        cin >> boys[i];

    int m;
    cin >> m;

    int girls[m];
    for (int i = 0; i < m; i++)
        cin >> girls[i];

    sort(boys, boys + n);
    sort(girls, girls + m);

    int girl_index = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int boy_skill = boys[i];

        while (girl_index < m &&
               abs(boy_skill - girls[girl_index]) > 1 && boy_skill > girls[girl_index])
        {
            girl_index++;
        }
        // cout << girl_index << endl;
        if (girl_index < m && abs(boy_skill - girls[girl_index]) <= 1)
        {
            // cout << boy_skill << " " << girls[girl_index] << endl;
            girl_index++;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}