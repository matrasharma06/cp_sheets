// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    void multiply(vector<int> &vec, int x)
    {
        int prod, carry = 0;
        vector<int>::iterator it;

        for (int i = 0; i < vec.size(); i++)
        {
            prod = vec[i] * x + carry;
            vec[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry)
        {
            vec.push_back(carry % 10);
            carry = carry / 10;
        }
    }

    vector<int> factorial(int N)
    {
        vector<int> ans;
        ans.push_back(1);

        for (int i = 2; i <= N; i++)
            multiply(ans, i);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends