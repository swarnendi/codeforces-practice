#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    
    if (cin >> t) 
    {
        while (t--) 
        {
            int n;
            cin >> n;

            int a1, a2, a3;
            cin >> a1 >> a2 >> a3;

            int ans = max(abs(a1 - n), max(abs(a2 - n), abs(a3 - n)));

            cout << ans << "\n";
        }
    }
}