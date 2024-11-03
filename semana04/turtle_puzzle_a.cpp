#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a[51], sum = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
            if (a[j] < 0)
                a[j] = -a[j];
            sum += a[j];
        }
        cout << sum << endl;
    }

    return (0);
}
