#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        int *index = new int[100000];
        int i, ans = 0;

        for (i = 0; i < n; i++)
            index[a[i]]++;

        for (i = 0; i < m; i++)
            index[b[i]]++;

        for (i = 0; i < 100000; i++)
        {
            if (index[i])
                ans++;
        }

        return ans;
        delete[] index;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];
        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }

    return 0;
} // } Driver Code Ends