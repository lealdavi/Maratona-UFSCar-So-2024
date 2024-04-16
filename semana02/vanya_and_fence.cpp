#include <iostream>
using namespace std;

int main()
{
    int n, h, a[1002], w = 0;
    // INPUT
    // The first line of the input contains two integers n and h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000) — the number of friends and the height of the fence, respectively.
    cin >> n >> h;
    // The second line contains n integers ai (1 ≤ ai ≤ 2h), the i-th of them is equal to the height of the i-th person.
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            w += 2;
        }
        else
        {
            w += 1;
        }
    }
    // OUTPUT
    // Print a single integer — the minimum possible valid width of the road.
    cout << w << endl;
    return 0;
}