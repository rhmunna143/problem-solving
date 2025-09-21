/***
 * Objective:
 * Find minimum number of Action 1 (placing water) to fill all empty cells
 *
 * Context:
 * - Empty cells: '.'
 * - Blocked cells: '#'
 * - Auto-fill: if cell i is empty and both neighbors have water, cell i fills automatically
 *
 * Constrains:
 * - 1 ≤ t ≤ 100 (test cases)
 * - 1 ≤ n ≤ 100 (number of cells)
 *
 * Note:
 * - If 3+ consecutive empty cells exist, we can solve with just 2 Action 1 operations
 * - Otherwise, count segments of consecutive empty cells and use 2 per segment (or 1 for single cell)
 *
 * TODO:
 * Algorithm || Pseudo-code || Steps -- Write here
 *
 * 1. Check if there are 3+ consecutive empty cells -> return 2
 * 2. Otherwise, count segments of consecutive empty cells
 * 3. For each segment: 1 cell = 1 action, 2+ cells = 2 actions
 *
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    // Check if there are 3 or more consecutive empty cells
    for (int i = 0; i <= n - 3; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            cout << 2 << endl;
            return;
        }
    }

    // Count total empty cells
    int empty_cells = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            empty_cells++;
        }
    }

    cout << empty_cells << endl;
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