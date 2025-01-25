#include <bits/stdc++.h>
using namespace std;

void insertion_sort(long int arr[], int n);
long int min(long int a, long int b);

int main()
{
    int t, n;
    long int a[101], score;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        score = 0;
        cin >> n;
        n *= 2;
        for (int j = 0; j < n; j++)
            cin >> a[j];

        insertion_sort(a, n);
        for (int j = 0; j < n; j += 2)
            score += min(a[j], a[j + 1]);

        cout << score << endl;
    }
}

void insertion_sort(long int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        long int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

long int min(long int a, long int b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        return a;
}