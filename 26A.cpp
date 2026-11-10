#include <bits/stdc++.h>
using namespace std;

bool has_two_primes(long long n) {
    if (n < 4) return false; 
    
    int count = 0;
    
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0) n /= 2; 
    }
    
    for (long long i = 3; i * i <= n; ++i) {
        if (n % i == 0) {
            count++;
            if (count > 2) return false; 
            
            while (n % i == 0) n /= i; 
        }
    }
    
    if (n > 1) {
        count++;
    }
    
    return count == 2;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    if (cin >> n) 
    {

        int count = 0;

        for (int i = 4; i <= n; i++) 
        {
            count += has_two_primes(i);
        }

        cout << count << "\n";
    }
}