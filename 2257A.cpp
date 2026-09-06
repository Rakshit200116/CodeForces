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
        int hash[26] = {0};
        for (int i = 0; i < n; i++)
        {
            string word;
            cin >> word;
            char letter = word[0];
            hash[letter - 97]++;
        }
        bool ans = true;
        for (int i = 0; i < m; i++)
        {
            string word;
            cin >> word;
            for (int j = 0; j < word.size(); j++)
                if (hash[word[j] - 65] == 0)
                {
                    ans = false;
                }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}