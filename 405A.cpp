#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) 
    {
        vector<int> cubes(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> cubes[i];
        }

        sort(cubes.begin(), cubes.end());

        for (int i = 0; i < n; i++) 
        {
            cout << cubes[i];

            if (i != n - 1) 
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
}