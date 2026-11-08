#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    if (cin >> n) 
    {
        int m;
        cin >> m;

        vector<int> usbs(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> usbs[i];
        }

        sort(usbs.rbegin(), usbs.rend()); 
        
        int total = 0;
        int i = 0;
        int ans = 0;

        while (total < m) 
        {
            total += usbs[i];
            ans++;
            i++;
        }

        cout << ans;
    }
}