#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve()
{
    int n, i, j, ii, jj, ans = 0;
    cin >> n;
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (ii = i; ii < n; ii++)
            {
                for (jj = j; jj < n; jj++)
                {
                    if (arr[ii][jj] < arr[i][j])
                        ans++;
                }
            }
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin >> test;
    while (test--)
    {
        cout << solve() << endl;
    }
}