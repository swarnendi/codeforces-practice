
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int i = 0;

        while (i < n) {

            if (s[i] == '1') {
                ans++;
                i++;
                continue;
            }

            int j = i;

            while (j < n && s[j] == '0') {
                j++;
            }

            int len = j - i;
            int extra = 0;

            if (i == 0) 
            {
                extra++;
            }

            if (j == n) 
            { 
                extra++; 
            };

            ans += (len + extra) / 3;
            i = j;
        }

        cout << ans << '\n';
    }

    return 0;
}
