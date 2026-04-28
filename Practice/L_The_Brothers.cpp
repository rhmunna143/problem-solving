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

int main()
{
    // start codeing here
    string first_person, second_person;

    getline(cin, first_person);
    getline(cin, second_person);

    string first_person_second_name = first_person.substr(first_person.find(' ') + 1);
    string second_person_second_name = second_person.substr(second_person.find(' ') + 1);

    if (first_person_second_name == second_person_second_name)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}

// Author: @rhmunna143