#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        string s;
        cin >> s;

        int N = 2 * n;

        // final[i] = whether there is a potato at position i
        // Start with the original configuration.
        string final = s;

        // Handle all non-circular 10 pairs.
        for (int i = 0; i < N - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
            {
                final[i] = '0';
                final[i + 1] = '1';
            }
        }

        // Handle the circular pair: last -> first
        if (s[N - 1] == '1' && s[0] == '0')
        {
            final[N - 1] = '0';
            final[0] = '1';
        }

        int redScore = 0;
        int blueScore = 0;

        for (int i = 0; i < N; i++)
        {
            if (final[i] == '1')
            {
                // Position i is 0-indexed.
                // i even -> position i+1 is odd -> Red.
                // i odd  -> position i+1 is even -> Blue.
                if (i % 2 == 0)
                    blueScore++;
                else
                    redScore++;
            }
        }

        cout << redScore << " " << blueScore << '\n';
    }

    return 0;
}