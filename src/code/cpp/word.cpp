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
    int isEqual = 0;
    for (auto &ch : str)
    {
        if (isupper(ch))
            isEqual++;
        else
            isEqual--;
    }

    if (isEqual > 0)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str << endl;
    return 0;
}