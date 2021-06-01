#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll m=1000000007 ;
    ll n ;
    cin >> n ;
    ll ans=1 ;
    // ll res=pow(2,n);
    // res%=m ;
    // cout << res << endl ;
    while(n)
    {
        ans=(ans*2)%m ;
        n-- ;
    }
    cout << ans%m << endl ;
    
    return 0 ;
}