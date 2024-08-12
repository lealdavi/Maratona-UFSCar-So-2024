#include <bits/stdc++.h>
using namespace std;

int main()
{
    // INPUT
    // The first line contains a positive integer n (1 ≤ n ≤ 100), then follow n lines containing three integers each: the xi coordinate, the yi coordinate and the zi coordinate of the force vector, applied to the body ( - 100 ≤ xi, yi, zi ≤ 100).
    int n, x, y, z, fx = 0, fy = 0, fz = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        fx += x;
        fy += y;
        fz += z;
    }
    if (fx == 0 && fy == 0 && fz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;

    // OUTPUT

}
