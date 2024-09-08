#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[3];
    for (int i = 0; i < 3; i++)
        cin >> x[i];
    for (int i = 0; i < 2; i++)
    {
        for (int j = i; j < 3; j++)
        {
            if (x[j] < x[i])
            {
                int tmp = x[j];
                x[j] = x[i];
                x[i] = tmp;
            }
        }
    }

    int dist = x[2] - x[0];

    cout << dist << endl;

    return (0);
}