#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // INPUT
  // The first line contains an integer n (1 <= n <= 100)
  // Each of the following n lines contains 1 word. All the words consist of lowercase Latin letters and possess the lengths of from 1 to 100 characters.
  int n, count = 0;
  string word;

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> word;
    char first_character = word[0];
    char last_character = word.back();
    count = 0;

    for (auto it = word.begin() + 1; it != word.end() - 1; it++)
    {
      count++;
    }
    if (count <= 8)
    {
      cout << word << endl;
    }
    else
    {
      cout << first_character << count << last_character << endl;
    }
    
  }
  
  return 0;

  // OUTPUT
  // Print n lines. the i-th line should contain the result of replacing of the i-th word from the input data
}

