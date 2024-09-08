#include <bits/stdc++.h>
using namespace std;

int main()
{

  string s;
  int pos = 0;

  cin >> s;

  if (s.length() > 1)
  {

    for (int i = 0; i < s.length() - 2; i++)
    {
      if (s[i] >= 49 && s[i] <= 51)
      {
        for (int j = i + 2; j < s.length(); j += 2)
        {
          if (s[j] < s[i])
          {
            char tmp = s[j];
            s[j] = s[i];
            s[i] = tmp;
          }
        }
      }
    }
  }

  cout << s << endl;

  return (0);
}
