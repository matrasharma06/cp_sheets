#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int ele;
    int arr[5][5] = {{0, 0, 0, 0, 0}, {0, 1, 1, 1, 0}, {0, 1, 1, 1, 0}, {0, 1, 1, 1, 0}, {0, 0, 0, 0, 0}};
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> ele;
            if (ele % 2 != 0)
            {
                arr[i][j] = !arr[i][j];
                arr[i - 1][j] = !arr[i - 1][j];
                arr[i + 1][j] = !arr[i + 1][j];
                arr[i][j + 1] = !arr[i][j + 1];
                arr[i][j - 1] = !arr[i][j - 1];
            }
        }
    }
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}