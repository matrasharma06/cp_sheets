#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll n , ans=0 , res=0 ;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    for (ll i = 0; i < n-1; i++)
    {
       if (arr[i+1]<arr[i])
       {
           res=arr[i]-arr[i+1] ;
           swap(arr[i],arr[i+1]) ;
           ans+=res ;
       }
       
    }
    cout << ans << endl ;
    
    
    

    return 0 ;
}