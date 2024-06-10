/*
URL: https://codeforces.com/problemset/problem/71/A
Submission: 265010443
Date: Jun/10/2024 12:30UTC+6
Lang: C++17 (GCC 7-32)
Verdict: Accepted
Time: 46 ms
Memory: 4104 KB
*/

// Include the standard input-output stream library before compiling
#include <iostream>

// Set the namespace to std so that we can do `cin`, `cout` and `endl` rather
// than doing `std::cin`, `std::cout` and `std::endl`.
using namespace std;

int main()
{
  // The number of words accepted from the user input
  int limit;
  cin >> limit;

  // Get the string which needs to be updated
  string word;

  while (limit--)
  {
    cin >> word;

    // If the word length is greater than 10
    if (word.length() > 10)
    {
      // Output the first character + word length - 2 + last character
      // Example: internationalization becomes i18n
      cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    }
    // Else the word length is less than 10
    else
    {
      // Output the word.
      cout << word << endl;
    }
  }

  // Regular return
  return 0;
}
