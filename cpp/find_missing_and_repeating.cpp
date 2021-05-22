// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {

        static int ar[2];
        int index[n] = {0};

        for (int i = 0; i < n; i++)
        {
            index[arr[i] - 1]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (index[i] > 1)
            {
                ar[0] = i + 1;
            }
            if (index[i] < 1)
            {
                ar[1] = i + 1;
            }
        }

        return ar;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends