#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define irep(it,m) for(auto it=m.begin(),it!=m.end();it++) 
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    if(a==b)
    {
        if(a&1) cout<<-1*a;
        else cout<<a;
        cout<<endl;
    }
    else 
    {
        if((b-a-1)%2==1)
    {
        if(a&1)
        {
            ans-=((b-a-1)/2);
            ans-=a;
        }
        else
         {
            ans+=a;
            ans+=((b-a-1)/2);
        }
        if(b&1)
        {
            ans-=b;
           ans+=(b-1);
            
        }
        else 
        {
                ans+=b;
                ans-=(b-1);      
        }


    }
    else 
    {
        if(a&1)
        {
            ans-=((b-a-1)/2);
            ans-=a;
        }
        else
         {
            ans+=a;
            ans+=((b-a-1)/2);
        }
        if(b&1)
        {
            ans-=b;
          
            
        }
        else 
        {
                ans+=b;
                     
        }

    }
    
    cout<<ans<<endl;
    }
   
}
return 0;
}