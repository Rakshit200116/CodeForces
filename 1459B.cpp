#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<pair<int, int>> s;
    if (n % 2 == 0)

    {
        int vertical = n / 2;
        while (vertical >= 0)
        {
            int horizontal = n / 2;
            while (horizontal >= 0)
            {
                s.insert({vertical, horizontal});
                s.insert({vertical, -horizontal});
                s.insert({-vertical, horizontal});
                s.insert({-vertical, -horizontal});
                horizontal -= 2;
            }
            vertical -= 2;
        }

        cout << s.size() << endl;
    }
    else
    {
        int vertical = (n + 1) / 2;
        while (vertical >= 0)
        {
            int horizontal = n / 2;
            while (horizontal >= 0)
            {
                s.insert({vertical, horizontal});
                s.insert({vertical, -horizontal});
                s.insert({-vertical, horizontal});
                s.insert({-vertical, -horizontal});
                horizontal -= 2;
            }
            vertical -= 2;
        }
        vertical = (n) / 2;
        while (vertical >= 0)
        {
            int horizontal = (n + 1) / 2;
            while (horizontal >= 0)
            {
                s.insert({vertical, horizontal});
                s.insert({vertical, -horizontal});
                s.insert({-vertical, horizontal});
                s.insert({-vertical, -horizontal});
                horizontal -= 2;
            }
            vertical -= 2;
        }
        cout << s.size() << endl;
    }
    return 0;
}