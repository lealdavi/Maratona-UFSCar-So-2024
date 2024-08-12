#include <bits/stdc++.h>
using namespace std;

int main()
{
  // INPUT
  // The only line of input contains a positive integer n (1 ≤ n ≤ 10) — the number of rows and columns of the table.
  int n;

  cin >> n;

  int a[10][10];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0)
      {
        a[i][j] = 1;
      }
      else
      {
        a[i][j] = a[i - 1][j] + a[i][j - 1];
      }
      
    }
  }
  // OUTPUT
  // Print a single line containing a positive integer m — the maximum value in the table.
  cout << a[n - 1][n - 1] << endl;

  return 0;
}

