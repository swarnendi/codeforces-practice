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
            int n;
            cin >> n;

            vector<int> nums(n);
            int count_easy = n;

            for (int i = 0; i < n; i++) 
            {
                cin >> nums[i];
                count_easy -= nums[i];
            }

            if (count_easy < 2) 
            {
                cout << "-1" << "\n";
                continue;
            }

            if (nums[0] == 0 && nums[n - 1] == 0) 
            {
                cout << "0" << "\n";
                continue;
            }
            else if (nums[0] == 0 || nums[n - 1] == 0) 
            {
                cout << "1" << "\n";
                continue;
            }
            else 
            {
                cout << "2" << "\n";
                continue;
            }
        }
    }

    return 0;
}