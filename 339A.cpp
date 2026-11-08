#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string prob;

    if (cin >> prob) 
    {
        vector<int> nums;

        for (char c : prob) 
        {
            if (c != '+') 
            {
                nums.push_back(c - '0');
            }
        }

        sort(nums.begin(), nums.end());

        string output = "";

        for (int i = 0; i < nums.size(); i++) 
        {
            output += (to_string(nums[i]) + '+');
        }

        cout << output.substr(0, output.length() - 1) << "\n";
    }

    
}