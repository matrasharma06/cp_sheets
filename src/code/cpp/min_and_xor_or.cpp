#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve()
{
    int n, i, ans = INT_MAX;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (i = 0; i < n - 1; i++)
    {

        ans = min(ans, arr[i] ^ arr[i + 1]);
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