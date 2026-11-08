    #include <bits/stdc++.h>
    using namespace std;

    int main() 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        long long t;

        if (cin >> t) 
        {
            while (t--) 
            {
                long long n;
                cin >> n;

                vector<long long> nums(n);

                for (int i = 0; i < n; i++) 
                {
                    cin >> nums[i];
                }

                bool flag = false;

                for (int i = 0; i < n - 1; i++) 
                {
                    if (nums[i] > nums[i + 1]) 
                    {
                        flag = true;
                        break;
                    }

                    int x = min(nums[i], nums[i + 1]);

                    nums[i] -= x;
                    nums[i + 1] -= x;
                }

                if (!flag) 
                {
                    cout << "YES" << "\n";
                } else 
                {
                    cout << "NO" << "\n";
                }
            }
        }

        
    }