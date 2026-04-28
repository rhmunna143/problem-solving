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

void solve()
{
    // start coding from here
    double r;
    cin >> r;

    double d = 2 * r;
    double square_area = d * d;
    double pi = 2 * acos(0.0);
    double circle_area = pi * r * r;

    double shaded_area = square_area - circle_area;

    cout << fixed << setprecision(2) << shaded_area << endl;
}

int main()
{
    int t;
    cin >> t;

    int case_num = 1;

    while (t--)
    {
        cout << "Case " << case_num++ << ": ";
        solve();
    }

    return 0;
}

// Author: @rhmunna143