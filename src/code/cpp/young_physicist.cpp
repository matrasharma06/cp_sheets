#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, y, z, xSum, ySum, zSum;
    xSum = ySum = zSum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        xSum += x;
        ySum += y;
        zSum += z;
    }

    if (xSum == 0 && ySum == 0 && zSum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}