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
    lli n;
    cin>>n;
    int count=1;
    lli x=n;
    int ans=0;
    while(x)
    {
        if(x%10!=0)
       ans++;
        x=x/10;
    }
    cout<<ans<<endl;
    while(n)
    {
        if(n%10!=0)
        {
        cout<<(n%10)*count<<" " ;
        }
        count*=10;
        n=n/10;
    }
    cout<<endl;
}
return 0;
}