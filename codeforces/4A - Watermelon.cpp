/*
URL: https://codeforces.com/problemset/problem/4/A
Submission: 265006223
Date: Jun/10/2024 11:50UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 92 ms
Memory: 0 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  // Declare the `w` variable which will hold the weight of the watermelon.
  int w;

  // Take the users input from the standard input stream and store it in the `w`
  // variable.
  cin >> w;

  // If the weight of the watermelon is more than 2, then we check if we can
  // divide it into two parts. If we can, then the output will be YES.
  if (w > 2 && w % 2 == 0)
  {
    cout << "YES" << endl;
  }
  // Else the watermelon cannot be divided in two equal parts. So the output
  // will be NO.
  else
  {
    cout << "NO" << endl;
  }

  // Regular return
  return 0;
}
