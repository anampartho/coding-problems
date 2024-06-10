/*
URL: https://codeforces.com/problemset/problem/282/A
Submission: 265026894
Date: Jun/10/2024 14:49UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 62 ms
Memory: 0 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  // Declare variables and initialize `x` with 0
  int statement_count, x(0);
  string statement;

  // Take the number of statements from user input
  cin >> statement_count;

  // For each statement
  while (statement_count--)
  {
    // Get the actual statement
    cin >> statement;

    // If it is increment, increment the variable `x`
    if (statement[1] == '+')
    {
      x++;
    }

    // If it is decrement, decrement the variable `x`
    if (statement[1] == '-')
    {
      x--;
    }
  }

  // Print out the final value of `x`
  cout << x << endl;

  // Regular return
  return 0;
}
