#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool check(ll x, ll d)
{
    
    while(x)
    {
        if(x%10==d)
        return true;
        x/=10;
    }
    return false;
}
int main()
{
cc
ll t;
cin>>t;
while(t--)
{
    ll q,d;
    cin>>q>>d;
    rep(i,0,q)
    {
        ll x;
        cin>>x;
        
        if(x%d==0 || check(x,d)) cout<<"YES"<<endl;
        else  {
            int flag=0;
            while(x>10)
            {
                x-=10;
                if(x%d==0)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }
                
            }
            if(!flag)
            {
                if(x%d==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            

        }
    }
}
return 0;
}