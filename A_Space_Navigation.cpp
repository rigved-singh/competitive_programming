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
    lli x,y;
    cin>>x>>y;
    long r=0,u=0,l=0,d=0;
    string s;
    cin>>s;
    for(long i=0;i<s.size();i++)
    {
        if(s[i]=='R')
        r++;
        if(s[i]=='U')
        u++;
        if(s[i]=='L')
        l++;
        if(s[i]=='D')
        d++;
    }
    if(x>=0&&y>=0) {
        if(x<=r&&y<=u) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(x<=0&&y>=0)
    {
        if(abs(x)<=l && y<=u) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(x>=0&&y<=0)
    {
        if(r>=x&&abs(y)<=d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else {
        if(l>=abs(x)&&d>=abs(y)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
return 0;
}