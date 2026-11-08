#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;

    if (cin >> n) 
    {
        if (n % 2 == 0) 
        {
            cout << n / 2;
        }
        else 
        {
            long long ans = n / 2 - n;
            cout << ans;
        }
    }
}