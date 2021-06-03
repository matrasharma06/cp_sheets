#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int luckyCnt = 0;
    cin >> str;

    for (auto &ch : str)
    {
        if (ch == '4' || ch == '7')
            luckyCnt++;
    }
    if (luckyCnt == 7 || luckyCnt == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}