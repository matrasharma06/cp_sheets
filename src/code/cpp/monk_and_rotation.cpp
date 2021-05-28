#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n, k, temp;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = n - (k % n);
    for (int i = x; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
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
        solve();
        cout << endl;
    }
}