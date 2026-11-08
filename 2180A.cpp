#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;

    if (cin >> T) 
    {
        while (T--) 
        {
            int a, b, l;
            cin >> l >> a >> b;

            int step = 1;
            int ans = INT_MIN;

            set<int> cycle;

            while (true) 
            {
                int new_loc = (a + step * b) % l;

                if (cycle.count(new_loc)) 
                {
                    break;
                }
                else
                {
                    cycle.insert(new_loc);
                    ans = max(ans, new_loc);
                    step++;
                }
            }

            cout << ans << "\n";

        }
    }
}