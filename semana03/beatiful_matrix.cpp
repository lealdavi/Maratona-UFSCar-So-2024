#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, ans = 0;
  // INPUT
  // The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> n;
      if (n == 1)
      {
        ans = abs(i - 2) + abs(j - 2);
      }

    }
  }
  // OUTPUT
  // Print a single integer — the minimum number of moves needed to make the matrix beautiful.
  cout << ans;
  return 0;
}

