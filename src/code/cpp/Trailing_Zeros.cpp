#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll n ;
    cin >> n ;
    
    ll ans=0 ;
    while(n!=0)
    {
        ans=ans+(n/5) ;
        n/=5  ;
    }
    
    cout << ans << endl ;
    
    return 0 ;
}