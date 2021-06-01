#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   ll a , b  ;
   cin >> a >> b  ;
   if (a==0&&b==0)
   {
      cout << "YES" << endl ;
   }
   else if ((a==0&&b!=0)||(a!=0&&b==0))
   {
       cout << "NO" << endl ;
   }
   else if (a==b && a%3==0)
   {
       cout << "YES" << endl ;
   }
   else if((a+b)%3==0 && min(a,b)*2 >= max(a,b))
   {
       cout << "YES" << endl ;
   }  
   else
   {
       cout << "NO" << endl ;
   }


   return 0  ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0  ;
}