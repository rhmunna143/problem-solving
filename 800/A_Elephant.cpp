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
 * 1. Read the destination point
 * 2. To minimize steps, always try to take the maximum step size (5)
 * 3. The minimum number of steps = ceiling(destination_point / 5)
 * 4. Use the formula: (destination_point + 4) / 5 for integer ceiling division
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // calling solve here with logics here
    long long int destination_point;
    cin >> destination_point;

    // To minimize steps, we should use the largest possible step size
    // The minimum number of steps is ceiling(destination_point / 5)
    // which is equivalent to (destination_point + 4) / 5
    cout << (destination_point + 4) / 5;

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