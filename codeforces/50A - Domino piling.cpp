/*
URL: https://codeforces.com/problemset/problem/50/A
Submission: 265085888
Date: Jun/10/2024 22:08UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 92 ms
Memory: 4100 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;

  // As this is a m * n square and each domino takes two squares, if we multiply
  // m and n and divide it by 2, we will get an integer without the decimal point
  // and this denotes the number of dominos put into the board.
  cout << (m * n) / 2 << endl;
}
