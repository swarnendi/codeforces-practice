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
            long long n;
            long long q;
            cin >> n >> q;

            vector<long long> nums(n);
            vector<long long> prefix_sum(n + 1, 0);

            for (long long i = 0; i < n; i++) 
            {
                cin >> nums[i];
            }

            for (int i = 0; i < n; i++) 
            {
                prefix_sum[i + 1] = prefix_sum[i] + nums[i];
            }

            for (int i = 0; i < q; i++) 
            {
                long long l, r, k;
                cin >> l >> r >> k;

                long long sum = prefix_sum[l - 1] + (prefix_sum[n] - prefix_sum[r]);
                long long new_sum = sum + (r - l + 1) * k;

                if (new_sum % 2 == 1) 
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
}
