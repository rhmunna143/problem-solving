/***
 * Objective:
 * Find minimum spell casts to kill all monsters
 *
 * Context:
 * - Spell 1: Choose 2 alive monsters, decrease health by 1 each
 * - Spell 2: Kill a single monster instantly
 * - Monster dies when health becomes 0
 *
 * Constrains:
 * - 1 ≤ t ≤ 10^4 (test cases)
 * - 1 ≤ n ≤ 100 (monsters)
 * - 1 ≤ hi ≤ 100 (health of each monster)
 *
 * Note:
 * - Spell 1 is efficient when it can kill monsters (health = 1)
 * - Spell 2 is useful for high health monsters or when pairing isn't optimal
 *
 * TODO:
 * Algorithm || Pseudo-code || Steps -- Write here
 *
 * 1. Count monsters with health = 1 (ones)
 * 2. Pair monsters with health = 1 using Spell 1: (ones + 1) / 2 casts
 * 3. Use Spell 2 for monsters with health > 1: (n - ones) casts
 * 4. Total = (ones + 1) / 2 + (n - ones)
 *
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> h(n);
    
    int ones = 0;
    int total_health = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        total_health += h[i];
        if (h[i] == 1) {
            ones++;
        }
    }
    
    // Strategy: 
    // 1. Monsters with health = 1 can be paired efficiently with Spell 1
    // 2. Monsters with health > 1 need to be handled with Spell 2 or reduced first
    
    // Key insight: We can use Spell 1 to reduce health of high-health monsters
    // and then pair them with monsters that have health = 1
    
    // Optimal approach:
    // - Use Spell 1 to pair monsters with health = 1: (ones + 1) / 2 casts
    // - Use Spell 2 for remaining monsters with health > 1: (n - ones) casts
    
    int result = (ones + 1) / 2 + (n - ones);
    cout << result << endl;
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