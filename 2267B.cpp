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
        int hash[101] = {0};
        int biggest = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            hash[temp]++;
            biggest = max(biggest, temp);
        }
        int freq = hash[biggest];
        for (int i = freq; i > 0; i--)
        {
            cout << biggest << " ";
            hash[biggest]--;
            n--;
        }
        while (n)
        {
            for (int i = 100; i > 0; i--)
            {
                if (hash[i] > 0)
                {
                    cout << i << " ";
                    hash[i]--;
                    n--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}