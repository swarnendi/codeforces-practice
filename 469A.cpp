#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) 
    {

        int p, q;

        cin >> p;

        vector<int> levels(n);

        for (int i = 0; i < p; i++) 
        {
            int a;
            cin >> a;
            a--;
            levels[a] = 1;
        }

        cin >> q;

        for (int i = 0; i < q; i++) 
        {
            int a;
            cin >> a;
            a--;
            levels[a] = 1;
        }

        int total = 0;

        for (int i : levels) 
        {
            total += i;
        }

        cout << ((total == n) ? "I become the guy." : "Oh, my keyboard!");
    }
}