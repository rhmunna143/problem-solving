// Author: @rhmunna143

/**
 * Problem Statement:
 * You are given an array of n integers, and your task is to find two values (at distinct positions) whose sum is x.
 *
 * Constraints:
 * 2≤n≤2⋅105
1≤x,ai≤109
 *
 * Input:
 * The first input line has two integers n
 and x
: the array size and the target sum.

The second line has n integers a1,a2,…,an
: the array values.
 * 4 8
2 7 5 1

 *
 * TODO: /  Algorithm:
 * step 1: Create a hash map to store the values and their corresponding indices.
 * step 2: Iterate through the array and for each element, check if (x - element) exists in the hash map.
 * step 3: If found, print the indices of the current element and the element from the hash map.
 * step 4: If not found, add the current element and its index to the hash map.
 *
 * Output:
 * Print two integers: the positions of the values. If there are several solutions, you may print any of them. If there are no solutions, print  −1
 * 2 4
 *
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solve()
{
    // start coding from here
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int complement = x - a[i];
        if (mp.find(complement) != mp.end())
        {
            cout << mp[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        mp[a[i]] = i;
    }
    cout << -1 << endl;
    return 0;
}

int main()
{
    // Single test case: call solve() once (CSES style input)
    solve();

    return 0;
}

// Author: @rhmunna143