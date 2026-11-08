#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) 
    {
        vector<int> coins(n);

        int sum = 0;
        
        for (int i = 0; i < n; i++) 
        {
            cin >> coins[i];
            sum += coins[i];
        }

        sort(coins.rbegin(), coins.rend());

        int tot = 0;
        int i = 0;
        int ans = 0;

        while (tot <= sum / 2) 
        {
            tot += coins[i];
            i++;
            ans++;
        }

        cout << ans;
    }
}