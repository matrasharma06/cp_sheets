#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define endl "\n" 

int main()
{
    ll n ;
    cin >> n ;
    ll arr[n] ;
    set<ll> s ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
        s.insert(arr[i]) ;
    } 
    cout << s.size() << endl ;
    
    return 0;
}