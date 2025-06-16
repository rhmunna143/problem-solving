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
 * 1.
 *
 */

#include <bits/stdc++.h>
using namespace std;

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

    int longest_blank_space = 0;
    int current_blank_space = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            current_blank_space++;
        }
        else
        {
            longest_blank_space = max(longest_blank_space, current_blank_space);
            current_blank_space = 0;
        }
    }
    
    // Check the final sequence of zeros (if array ends with zeros)
    longest_blank_space = max(longest_blank_space, current_blank_space);

    cout << longest_blank_space << endl;
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