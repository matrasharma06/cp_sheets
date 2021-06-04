#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, ele, mn = INT_MAX, mx = INT_MIN, mn_index = 0, mx_index = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        if (ele <= mn)
        {
            mn = ele;
            mn_index = i;
        }
        if (ele > mx)
        {
            mx = ele;
            mx_index = i;
        }
    }
    int factor = mn_index > mx_index ? 0 : 1;
    cout << n - mn_index - 1 + mx_index - factor << endl;
}