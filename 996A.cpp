#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) 
    {
        vector<int> pos = {1, 5, 10, 20, 100};

        int ans = 0;

        for (int i = 4; i >= 0; i--) 
        {
            ans += (n / pos[i]);
            n %= pos[i];
        }

        cout << ans << "\n";

    }
}