#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
  ll row , col , ans=0 ;
  cin >> row >> col ;
  if (row==col)
  {
      ans=(row*row)-(row-1) ;
  }
  else if(row>col)
  {
      if (row%2==0)
      {
          ans=(row*row)-(col-1) ;
      }
      else
      {
          ans=((row-1)*(row-1)) + col ;
      }
  }
  else
  {
      if (col%2==0)
      {
          ans=((col-1)*(col-1))+row ;
      }
      else
      {
          ans=(col*col)-(row-1) ;
      }
      
      
  }
  
  cout << ans << endl ;
   
   
   
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