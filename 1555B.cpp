#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int W, H;
        cin >> W >> H;

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int w, h;
        cin >> w >> h;

        double ans = 1e9;

        if (x2 - x1 + w <= W) {
            int left = max(0, w - x1);
            int right = max(0, x2 - (W - w));

            ans = min(ans, (double)min(left, right));
        }

        if (y2 - y1 + h <= H) {
            int down = max(0, h - y1);
            int up = max(0, y2 - (H - h));

            ans = min(ans, (double)min(down, up));
        }

        if (ans == 1e9)
            cout << -1 << '\n';
        else
            cout << fixed << setprecision(9) << ans << '\n';
    }

    return 0;
}