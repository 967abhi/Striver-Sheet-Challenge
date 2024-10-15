#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 1e6 + 1;

int main()
{
    int n;
    cin >> n;

    // Create dp array and initialize
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base case: 1 way to form the sum 0

    // Fill dp array using the recurrence relation
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= 6; ++j)
        {
            if (i - j >= 0)
            {
                dp[i] = (dp[i] + dp[i - j]) % MOD;
            }
        }
    }

    // Output the number of ways to form the sum n
    cout << dp[n] << endl;

    return 0;
}
