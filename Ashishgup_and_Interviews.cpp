#include<bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    lli n,k;
    cin>>n>>k;
    int solq=0;
    int ts=0;
    int bot=1;
    for(lli i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        if(x!=-1) solq++;
        if(x==-1) bot=0;
        if(x>1) bot=0;
        if(x>k) ts=1;

    }
    if(solq<ceil(1.0*n/2)) cout<<"Rejected"<<endl;
    else if(ts) cout<<"Too Slow"<<endl;
    else if(bot) cout<<"Bot"<<endl;
    else cout<<"Accepted"<<endl;
    
}
return 0;
}