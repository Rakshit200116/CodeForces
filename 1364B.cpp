#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t; // 2*10^^4
    while (t--)
    {
        int n;
        cin >> n; // 10^^5
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        stack<int> s;
        s.push(arr[0]);
        for (int i = 1; i < n - 1; i++)
        {
            int front = s.top();
            int now = arr[i], then = arr[i + 1];
            if (now > front && then < now)
                s.push(now);
            else if (now < front && then > now)
                s.push(now);
        }
        s.push(arr[n - 1]);
        int x = s.size();
        cout << s.size() << endl;
        int ans[s.size()];
        for (int i = s.size() - 1; i >= 0; i--)
        {
            ans[i] = s.top();
            s.pop();
        }

        for (int i = 0; i < x; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}