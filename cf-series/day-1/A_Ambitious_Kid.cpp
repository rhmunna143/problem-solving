/***
 * Objective: learn array manipulation and basic operations in C++. loops, conditionals, and functions. and absolute minimum calculation.
 *
 * Context: Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers [A1,A2,A3,…,AN]
. In one operation, Chaneka can choose one element, then increase or decrease the element's value by 1
. Chaneka can do that operation multiple times, even for different elements.

What is the minimum number of operations that must be done to make it such that A1×A2×A3×…×AN=0
?
 *
 *
 * Constrains: 
 * 1. 1<=N=<10^5
 * 2. -10^5<=Ai<=10^5
 *
 * Note: I've learned about the abs() lib of cpp.
 *
 *
 * TODO:
 * Algorithm | Pseudo-code | Steps -- Write here
 *
 * 1. start
 * 2. input n
 * 3. declare a vector of size n
 * 4. input the elements of the vector
 * 5. find absolute minimum of the vector
 * 6. decrement the absolute minimum by 1 until 0 and count the number of operations
 * 7. print the number of operations
 * 8. end
 *
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n; // Input the size of the array

    vector<int> arr(n); // Declare a vector of size n

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input the elements of the vector
    }

    int min_element = INT_MAX; // Initialize min_element to maximum integer value

    for (int i = 0; i < n; i++)
    {
        min_element = min(min_element, abs(arr[i])); // Find the absolute minimum of the vector
    }

    int operations = 0; // Initialize operations counter

    // Decrement the absolute minimum by 1 until it reaches 0 and count the number of operations
    while (min_element > 0)
    {
        min_element--; // Decrement the absolute minimum
        operations++;  // Increment the operations counter
    }

    cout << operations << endl; // Print the number of operations
    // The output is the number of operations needed to make the product zero

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