#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    ll n ;
    cin >> n ;
    ll sum=(n*(n+1))/2 ;
    vector<int> vec1 , vec2  ;
    if (sum%2!=0)
    {
          cout << "NO" << endl ;
    }
    else
    {
          sum /= 2 ;
          cout << "YES" << endl ;
          while(true)
          {
              if (n<=0)
              {
                  break ;
              }

              if (sum-n>=0)
              {
                  vec1.push_back(n) ;
                  sum-=n ;
              }
              else
              {
                  vec2.push_back(n)  ;
              }

              n--  ;
              
          }

          cout << vec1.size() << endl ;
          for (ll x:vec1 )
          {
              cout << x << " " ;
          }
          cout << endl ;
           cout << vec2.size() << endl ;
          for (ll x:vec2 )
          {
              cout << x << " " ;
          }
          cout << endl ;
          

    }
    
 
    return 0 ;
}