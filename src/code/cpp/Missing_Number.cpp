#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll  n ;
    cin >> n ;
    int arr[n-1] , flag=0 ; ;
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr,arr+(n-1)) ;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=(i+1))
        {
            cout << i+1 << endl ;
            flag=1 ;
            break ;
        }
        
    }
    if (flag==0)
    {
        cout << n << endl ;
    }
    

    return 0;
}