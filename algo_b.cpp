#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    if (cin >> n >> x) 
    {
        vector<int> algos(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> algos[i];
        }

        int ans = 0;

        sort(algos.begin(), algos.end());

        int total = 0;
        int i = 0;

        while (i < n && total <= x) 
        {
            total += algos[i];
            i++;

            if (total <= x) {

                ans++;

            }
        }

        cout << ans;

        return 0;
        
    }

    return 1;
}