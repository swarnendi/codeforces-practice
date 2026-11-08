#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) 
    {

        int ans = 0;
    
        for (int i = 0; i < n; i++) 
        {
            int p, v, t;
            cin >> p >> v >> t;

            int total = p + v + t;

            if (total >= 2) 
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }
}