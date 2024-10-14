#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> count(MAX, 0);

    // Read the array elements
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        count[arr[i]]++; // Increment count of the current element
    }

    // For each possible divisor g, calculate how many numbers are divisible by g
    for (int g = MAX - 1; g >= 1; --g)
    {
        int divisible_count = 0;

        // Check multiples of g
        for (int multiple = g; multiple < MAX; multiple += g)
        {
            divisible_count += count[multiple];
        }

        // If two or more numbers are divisible by g, it can be a GCD
        if (divisible_count >= 2)
        {
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}
