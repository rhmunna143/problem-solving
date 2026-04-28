/***
 * Objective: Find minimum gas tank capacity for round trip 0 -> x -> 0
 *
 * Context: Car uses 1 liter per 1 unit distance, can refuel only at gas stations
 *
 * Constrains: 1≤n≤50, 2≤x≤100, 0<a1<a2<...<an<x
 *
 * Note: Need to handle both forward and return journey
 *
 * TODO:
 * Algorithm || Pseudo-code || Steps -- Write here
 *
 * 1. Calculate distance from 0 to first gas station
 * 2. Calculate distances between consecutive gas stations
 * 3. Calculate distance from last gas station to x
 * 4. Calculate distance from x back to last gas station (same as step 3)
 * 5. Return maximum of all these distances
 *
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // solving here
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max_distance = 0;
    
    // Distance from 0 to first gas station
    max_distance = max(max_distance, a[0] - 0);
    
    // Distances between consecutive gas stations
    for (int i = 1; i < n; i++) {
        max_distance = max(max_distance, a[i] - a[i-1]);
    }
    
    // Distance from last gas station to x, then back to last gas station
    // This is the critical part - we need 2 * (x - a[n-1]) fuel for round trip
    // from last gas station to x and back
    max_distance = max(max_distance, 2 * (x - a[n-1]));
    
    cout << max_distance << endl;
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