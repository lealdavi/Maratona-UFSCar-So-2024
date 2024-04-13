#include <iostream>

using namespace std;

int main()
{
  int w;
  // INPUT
  // The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.
  cin >> w;

  //  OUTPUT 
  // Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
  
  if (w % 2 == 0)
  {
    w = w / 2;
    if (w % 2 == 0)
    {
      cout << "YES" << endl;
    }
    else if ((w - 1) != 0)
    {
      if ((w - 1) % 2 == 0 && (w + 1) % 2 == 0)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  else 
  {
    cout << "NO" << endl;
  }

  return 0;

}
