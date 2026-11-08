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
            string seq;
            int n;

            cin >> n >> seq;

            int count_open = 0; // (
            int count_close = 0; // )

            for (int i = 0; i < n; i++) 
            {
                if (seq[i] == '(')
                {
                    count_open++;
                }
                else
                {
                    count_close++;
                }
            }

            if (count_open == count_close) 
            {
                cout << "YES" << "\n";
            }
            else 
            {
                cout << "NO" << "\n";
            }
        }
    }
}