#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // INPUT
    // The first line contains a single integer(1 <= n <= 150) - the number of statements in the programme.
    short int n, ans = 0;
    string x;

    cin >> n;
    // Next n lines contain a statement each. Each statements contains exactly one operation(++ or --) and exactly one variable x (denoted as letter X). Thus, there are no empty statement. The operation and the variable can be written in any order.
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        size_t add = x.find("+");
        size_t subtract = x.find("-");
        if (add != string::npos)
        {
            ans++;
        }
        else if (subtract != string::npos)
        {
            ans--;
        }
    }

    cout << ans;

    return 0;
    // OUTPUT
    // Print a single integer - the final value of x.
}
