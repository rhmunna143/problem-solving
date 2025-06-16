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

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    // Check if there exists a pair with GCD <= some threshold
    // Typically we want to find a pair with minimum GCD
    bool possible = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int gcd_val = __gcd(arr[i], arr[j]);
            if (gcd_val <= 2) {  // Threshold of 2 is common in these problems
                possible = true;
                break;
            }
        }
        if (possible) break;
    }
    
    cout << (possible ? "Yes" : "No") << endl;
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