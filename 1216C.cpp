#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x1, y1, x2, y2; // 1st rectangle
    long long x3, y3, x4, y4; // 2nd rectangle
    long long x5, y5, x6, y6; // 3rd rectangle

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;

    long long overlap_width = max(0LL, min(x2, x4) - max(x1, x3));
    long long overlap_height = max(0LL, min(y2, y4) - max(y1, y3));

    long long area_one = overlap_width * overlap_height;

    overlap_width = max(0LL, min(x6, x2) - max(x5, x1));
    overlap_height = max(0LL, min(y6, y2) - max(y5, y1));

    long long area_two = overlap_width * overlap_height;
    long long overall = abs(x2 - x1) * abs(y2 - y1);

    overlap_width = max(0LL, min({x2, x4, x6}) - max({x1, x5, x3}));
    overlap_height = max(0LL, min({y2, y4, y6}) - max({y1, y5, y3}));

    long long triple = overlap_width * overlap_height;    

    cout << ((overall - area_two - area_one + triple > 0) ? "YES" : "NO");
}