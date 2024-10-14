// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Enter the value of x: "; // Optional for input prompt
//     cin >> x;

//     while (x--)
//     {
//         int y;
//         cout << "Enter the value of y: "; // Optional for input prompt
//         cin >> y;

//         int count = 0;
//         // Start loop from 1 to y (since 0 is invalid for division)
//         for (int i = 1; i <= y; i++)
//         {
//             if (y % i == 0)
//             {
//                 count++;
//             }
//         }
//         // Output the count of divisors for current y
//         cout << "Number of divisors of " << y << ": " << count << endl;
//     }

//     return 0; // End of main
// }

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1; // Maximum value of y

int main()
{
    // Precompute the number of divisors for each number up to MAX
    vector<int> divisor_count(MAX, 0);

    // For each number i, increment the divisor count for all its multiples
    for (int i = 1; i < MAX; ++i)
    {
        for (int j = i; j < MAX; j += i)
        {
            divisor_count[j]++;
        }
    }

    int x;
    cin >> x; // Read the number of integers

    while (x--)
    {
        int y;
        cin >> y;
        cout << divisor_count[y] << endl; // Output the number of divisors for each y
    }

    return 0;
}
