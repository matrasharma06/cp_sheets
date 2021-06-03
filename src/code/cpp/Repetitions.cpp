#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    string s;
    cin >> s ;
    ll count=1 , n=s.size() , ans=0 , res=0 , flag=0 ;
    for (ll i = 0; i <n-1 ; i++)
    {
        if (s[i]==s[i+1])
        {
            count++ ;
            ans=max(count,ans) ;
            flag=1 ;
        }
        else
        {
            count=1 ;
            res=1 ;
        }
        
        
    }
    

    if (n==1)
    {
        cout << 1 << endl ;
    }
    else
    {
        if (flag==0)
        {
        cout << res << endl;
        }
        else
        {
        cout << ans << endl;
        }
    }
    
  
    return 0 ;
}