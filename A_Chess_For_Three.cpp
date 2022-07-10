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
int n;
cin>>n;
int flag=1;
int p1=1,p2=2,sp=3;
for(int i=0;i<n;i++)
{
    int winner;
    cin>>winner;
    if(winner!=p1&&winner!=p2)
    {
        flag=0;
        
    }
    else {
        if(p1==winner)
        {
            int temp=p2;
            p2=sp;
            sp=temp;

        }
        else 
        {
            int temp=p1;
            p1=sp;
            sp=temp;
        }
    }
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}