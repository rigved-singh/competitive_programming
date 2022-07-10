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
ll n,a,x,b,y;
cin>>n>>a>>x>>b>>y;
int i=a,j=b;
bool ch=false;
int flag=0;
while(i!=x&&j!=y)
{
    if(i==j) {
        ch=true;
        break;
        
    }
    else{
            if(i<n) i++;
             else i=1;
             if(j>1) j--;
             else j=n;
    } 
   
}
if(i==j) ch=true;
if(ch) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}