// Author: @rhmunna143

/**
 * Problem Statement:
 *
 * Constraints:
 *
 * Input:
 *
 * TODO: /  Algorithm:
 *
 * Output:
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Start coding here
    int n;
    if (!(cin >> n))
        return 0; // Check if input exists

    vector<int> arr(n);

    // 1. Read elements into the pre-sized vector
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 2. Output the elements in their reversed order
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Author: @rhmunna143