// Author: @rhmunna143

/**
 * Problem Statement:
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
 *
 * Constraints:
 *
 * Input:
 *
 * TODO: /  Algorithm:
 * 1. Create an unordered map to store the indices of the numbers.
 * 2. Iterate through the array and for each number, check if the complement (target - current number) exists in the map.
 * 3. If it exists, return the indices of the current number and the complement.
 * 4. If it does not exist, add the current number and its index to the map.
 *
 * Output:
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    unordered_map<int, int> num_indices;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];

        if (num_indices.find(complement) != num_indices.end())
        {
            cout << "[" << num_indices[complement] << ", " << i << "]" << endl;
            return;
        }

        num_indices[nums[i]] = i;
    }

    return 0;
}

// Author: @rhmunna143