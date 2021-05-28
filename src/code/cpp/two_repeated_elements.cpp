// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    //Function to find two repeated elements.
    pair<int, int> twoRepeated(int arr[], int N)
    {
        static pair<int, int> ans;
        vector<int> temp;
        for (int i = 0; i < N + 2; i++)
        {
            if (arr[abs(arr[i])] > 0)
                arr[abs(arr[i])] = -arr[abs(arr[i])];
            else
                temp.push_back(abs(arr[i]));
        }
        ans.first = temp[0];
        ans.second = temp[1];
        return ans;
    }
};

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        int a[n + 2];

        for (int i = 0; i < n + 2; i++)
            cin >> a[i];

        Solution obj;
        pair<int, int> res;
        res = obj.twoRepeated(a, n);
        cout << res.first << " " << res.second << endl;
    }
    return 0;
}