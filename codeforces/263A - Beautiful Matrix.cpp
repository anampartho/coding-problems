/*
URL: https://codeforces.com/problemset/problem/263/A
Submission: 265179720
Date: Jun/11/2024 16:23UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 124 ms
Memory: 4100 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  /**
   * The row and col of the center item of the matrix is [3, 3];
   * To find out the moves required, we need to find the row and col of 1 in
   * the matrix and use the following formula:
   * move = abs(center row - row of 1) + abs(center col - col of 1)
   * example: abs(3 - 1) + abs(3 - 5);
   */

  int row, col, current_number, move(0);

  for (int i = 0; i < 25; i++)
  {
    cin >> current_number;

    if (current_number == 1)
    {
      row = i / 5 + 1;
      col = i % 5 + 1;

      move = abs(row - 3) + abs(col - 3);
    }
  }

  cout << move << endl;
}
