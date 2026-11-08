#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;

    if (cin >> t) 
    {
        while(t--) 
        {
            int n;
            string seq;

            cin >> n >> seq;

            int split = -1;
            int ans = INT_MIN;

            vector<int> marked(n, -1);
            vector<int> splits;

            for (int i = 0; i < n; i++) 
            {
                if (!(marked[s[i] - 'a'] != -1 && marked[s[i] - 'a'] >= split)) 
                {
                    split = i + 1;
                    splits.push_back(split);
                }   
            }
        }
    }

    
}
