#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n2.size(); i++)
    {
        printf("%d", n1[i] - '0' ^ n2[i] - '0');
    }
    return 0;
}