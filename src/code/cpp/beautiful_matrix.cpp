#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ele, x, y;

    for (int i = 1; i < 26; i++)
    {
        cin >> ele;
        if (ele == 1)
        {
            x = (i + 4) / 5;
            y = i % 5 ? i % 5 : 5;
        }
    }

    cout << abs(x - 3) + abs(y - 3) << endl;

    return 0;
}