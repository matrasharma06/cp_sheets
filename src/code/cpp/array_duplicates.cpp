// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        vector<int> ans;
        int index[n] = {0};
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            index[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (index[i] > 1)
                ans.push_back(i);
        }

        if (ans.empty())
        {
            ans.push_back(-1);
        }

        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends