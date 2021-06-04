#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, drink;
    double ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> drink;
        ans += drink;
    }
    cout << setprecision(12) << (ans) / n << endl;
}