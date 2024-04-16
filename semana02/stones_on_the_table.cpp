#include <iostream>
using namespace std;

char s[51];

int main()
{
    int n, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == s[i - 1])
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}