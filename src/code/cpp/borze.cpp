#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin >> str;
    int i = 0, len = str.size();
    while (i < len)
    {
        if (str[i] == '-')
        {
            if (str[i + 1] == '-')
            {
                cout << 2;
                i += 2;
            }
            else
            {
                cout << 1;
                i += 2;
            }
        }
        else
        {
            cout << 0;
            i++;
        }
    }
    cout << endl;
    return 0;
}