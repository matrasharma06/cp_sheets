   #include<bits/stdc++.h>
   using namespace std ;
   typedef long long int ll ;
   #define MAX 1000000000
   #define endl "\n" 


   int solution()
   {
      ll m=1000000007 ;
      ll a , b ;
      cin >> a >> b ;

      ll ans=1 ;
      a=a%m ;

      while (b>0)
      {
           if (b%2!=0)
           {
               ans=ans*a ;
               ans=ans%m ;
           }
           b/=2 ;
           a=(a*a)%m ;
           a=a%m ;  
           
      }

      cout << ans%m << endl ;
    
      
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