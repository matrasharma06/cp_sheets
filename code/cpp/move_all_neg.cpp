#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int j = n - 1;
    int i = 0;
    while (i < j)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}