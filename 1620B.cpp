#include <iostream>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int w, h;
            cin >> w >> h;

            // y = 0; horizontal
            int h_0;
            cin >> h_0;
            int arr_h_0[h_0];
            for (int i = 0; i < h_0; i++)
                  cin >> arr_h_0[i];
            long long h_0_max = arr_h_0[h_0 - 1] - arr_h_0[0];

            // y = h ; horizontal
            int h_h;
            cin >> h_h;
            int arr_h_h[h_h];
            for (int i = 0; i < h_h; i++)
                  cin >> arr_h_h[i];
            long long h_h_max = arr_h_h[h_h - 1] - arr_h_h[0];

            // x = 0; vertical
            int v_0;
            cin >> v_0;
            int arr_v_0[v_0];
            for (int i = 0; i < v_0; i++)
                  cin >> arr_v_0[i];
            long long v_0_max = arr_v_0[v_0 - 1] - arr_v_0[0];

            // x = w;vertical
            int v_w;
            cin >> v_w;
            int arr_v_w[v_w];
            for (int i = 0; i < v_w; i++)
                  cin >> arr_v_w[i];
            long long v_w_max = arr_v_w[v_w - 1] - arr_v_w[0];
            long long ans = 0;
            ans = max(ans, h_0_max * h);
            ans = max(ans, h_h_max * h);
            ans = max(ans, v_0_max * w);
            ans = max(ans, v_w_max * w);
            cout << ans << endl;
      }
      return 0;
}