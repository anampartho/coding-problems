/*
URL: https://codeforces.com/problemset/problem/158/A
Submission: 265062312
Date: Jun/10/2024 19:25UTC+6
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
  // Get the number of contestant and position to check from input stream
  int contestant_count, position;
  cin >> contestant_count >> position;

  // Create an array for storing the scores from the input stream
  int scores[contestant_count];

  // Push the items from input stream to the scores array
  for (int i = 0; i < contestant_count; i++)
  {
    cin >> scores[i];

    // If the first input is 0 then print 0 and return out of the program
    if (scores[i] == 0 && i == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  // Get the threshold value for the score based on which we will determine
  // how many participants will go to the next round.
  int score_threshold = scores[position - 1];

  // Set the total count to 0 for now.
  int total_next_round(0);

  // Loop through the scores array and find out how many is eligible to go to the
  // next round.
  for (int i = 0; i < contestant_count; i++)
  {
    // Increment only when the score of the current participant is greater than
    // or equal to the score threshold and the score is not 0.
    if (scores[i] >= score_threshold && scores[i] != 0)
    {
      total_next_round++;
    }
  }

  // Print the result
  cout << total_next_round << endl;

  // Regular return
  return 0;
}
