#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    if (cin >> N) 
    {

        vector<int> abc(3);

        for (int i = 0; i < N; i++) 
        {
            cin >> abc[0] >> abc[1] >> abc[2];


            if (abc[1] + abc[0] == abc[2]) 
            {
                cout << "+" << "\n";
            }
            else if (abc[0] - abc[1] == abc[2])
            {
                cout << "-" << "\n";
            }
        }
    }
}