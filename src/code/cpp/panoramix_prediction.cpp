#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int num = 2; num <= n / 2; num++)
    {
        if (n % num == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, i;
    cin >> n >> m;
    for (i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            break;
        }
    }
    if (i == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}