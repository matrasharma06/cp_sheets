#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll n ;
    cin >> n ;
    
    if (n==1)
    {
        cout << 1 << endl ;
    }
    else if (n==2||n==3)
    {
       cout << "NO SOLUTION" << endl ;
    }
    else if (n==4)
    {
        cout << "3 1 4 2" << endl ;
    }
    
    else
    {
        if (n%2==0)
        {
            for (ll i=n; i>=2; i-=2)
            {
                cout << i << " " ;
            }
            for (ll i=n-1; i>=1; i-=2)
            {
                cout << i << " " ;
            }

            
        }
        else
        {
            for (ll i=n-1; i>=2; i-=2)
            {
                cout << i << " " ;
            }
            for (ll i=n; i>=1; i-=2)
            {
                cout << i << " " ;
            }
            
        }
        
        cout << endl ;
        
    }
    
    
    
    
    

    return 0 ;
}