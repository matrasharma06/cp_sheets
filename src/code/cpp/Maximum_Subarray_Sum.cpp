#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define endl "\n" 
 
int main()
{
    ll n ;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    } 
    ll ans=arr[0] , sum=0 ;
    for (ll i = 0; i < n; i++)
    {
        sum+=arr[i] ;
        ans=max(sum,ans) ;
        if (sum<0)
        {
            sum=0 ;
        }
        
    }
    
    cout << ans << endl ;
    
    return 0;
}