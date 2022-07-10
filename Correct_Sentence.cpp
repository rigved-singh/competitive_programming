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
    int n;
    cin>>n;
    int flag=1;
    rep(i,0,n)
    {
        string s; 
        cin>>s;
        if(s[0]<='Z'&&s[0]>='N')
        {
            rep(i,1,s.size())
            {
                if(s[i]>'Z'||s[i]<'N')
                {
                    flag=0;
                   
                }
            }
        }
        else if(s[0]>='a'&&s[0]<='m')
        {
            rep(i,1,s.size())
            {
                if(s[i]>'m'||s[i]<'a')
                {
                    flag=0;
                    
                }
            }

        }
        else {
            flag=0;
            
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}