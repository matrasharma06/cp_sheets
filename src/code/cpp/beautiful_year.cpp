#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int num, a, b, c, d;
    cin >> num;
    bool isNotBeautiful = true;

    while (isNotBeautiful)
    {
        num++;
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100 % 10;
        d = num / 1000 % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            isNotBeautiful = false;
        }
    }
    cout << d << c << b << a << endl;
    return 0;
}