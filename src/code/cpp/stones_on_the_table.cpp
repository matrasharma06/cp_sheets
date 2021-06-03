#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int n, ans = 0;
    cin >> n >> str;
    char prev = str[0];
    for (int i = 1; i < n; i++)
    {
        if (str[i] == prev)
            ans++;
        else
            prev = str[i];
    }
    cout << ans << endl;
    return 0;
}