/*
URL: https://codeforces.com/problemset/problem/231/A
Submission: 265024958
Date: Jun/10/2024 14:34UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 124 ms
Memory: 0 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  // Declare variables and initialize can_solve with 0
  int problems, member_1, member_2, member_3, can_solve(0);

  // Take the number of problems from user input
  cin >> problems;

  // For each problem
  while (problems--)
  {
    // Take the pattern 0 0 0 and set it to member_1, member_2, member_3
    // in order.
    // So, if the input is 1 0 1 then:
    // member_1 = 1
    // member_2 = 0
    // member_3 = 1
    cin >> member_1 >> member_2 >> member_3;

    // Check if at least two of the members can solve the problem
    if (member_1 + member_2 + member_3 >= 2)
    {
      can_solve += 1;
    }
  }

  // Print out the number of problems the members can solve
  cout << can_solve << endl;

  // Regular return
  return 0;
}
