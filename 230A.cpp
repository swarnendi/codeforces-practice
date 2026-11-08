#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s;

    if (cin >> s >> n) 
    {
        vector<pair<int, int>> dragons(n);
        
        for (int i = 0; i < n; i++) 
        {
            cin >> dragons[i].first >> dragons[i].second;
        }

        sort(dragons.begin(), dragons.end());

        int cur_s = s;
        bool flag = false;

        for (int i = 0; i < n; i++) 
        {
            if (cur_s <= dragons[i].first) 
            {
                cout << "NO" << "\n";
                flag = true;
                break;
            }
            else 
            {
                cur_s += dragons[i].second;
            }
        }

        if (!flag) 
        {
            cout << "YES" << "\n";
        }
    }
}