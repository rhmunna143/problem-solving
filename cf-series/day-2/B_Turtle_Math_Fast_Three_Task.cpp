/***
 * Objective:
 *
 * Context:
 *
 *
 * Constrains:
 *
 *
 * Note:
 *
 *
 * TODO:
 * Algorithm || Pseudo-code || Steps -- Write here
 *
 * 1. Calculate sum of array
 * 2. If sum % 3 == 0, return 0
 * 3. If sum % 3 == 1, check if we can remove element with remainder 1, else add 2
 * 4. If sum % 3 == 2, we can always add 1 or remove element with remainder 2
 *
 */

#include <bits/stdc++.h>
using namespace std;

int sum_of_array(const vector<int> &arr)
{
    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }
    return sum;
}

bool has_element_with_remainder(const vector<int> &arr, int remainder)
{
    for (int num : arr)
    {
        if (num % 3 == remainder)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    // solving here
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = sum_of_array(a);
    int remainder = sum % 3;

    if (remainder == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (remainder == 1)
    {
        // Check if we can remove one element with remainder 1
        if (has_element_with_remainder(a, 1))
        {
            cout << 1 << endl;
        }
        else
        {
            // Need to add 2 to make it divisible by 3
            cout << 2 << endl;
        }
    }
    else // remainder == 2
    {
        // We can either add 1 or remove element with remainder 2
        // Both take 1 move, so answer is always 1
        cout << 1 << endl;
    }
}

int main()
{
    // calling solve here with logics here
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}

/***
 * Author:
 * Md Rabbi Haque Munna
 * BSc. [Engg.] in Computer Science and Engineering, [CSE]
 * Rabindra Maitree University, RMU
 * Batch: 2022-02
 * Kushtia, Bangladesh
 *
 * Email: rhmunna19@gmail.com
 * WhatsApp: +8801877-255595
 * LinkedIn: https://www.linkedin.com/in/rhmunna143
 * GitHub: https://github.com/rhmunna143
 * Portfolio: https://munna-dev.web.app
 * Facebook Profile: https://www.facebook.com/Munna.RMU
 *
 * Copyright (c) All rights reserved.
 */