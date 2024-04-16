#include <iostream>
using namespace std;

int main()
{
    int n, m[1005][3], ans = 0;
    // INPUT
    // The first input line contains a single integer n (1 ≤ n ≤ 1000) — the number of problems in the contest. Then n lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
            {
                s++;
            }
        }
        if (s >= 2)
        {
            ans++;
        }
    }
    // OUTPUT
    // Print a single integer — the number of problems the friends will implement on the contest.
    cout << ans << endl;
    return 0;
    
}