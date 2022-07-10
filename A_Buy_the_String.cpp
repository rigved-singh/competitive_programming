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
int min(int a,int b)
{
    if(a>b) return b;
    else return a;
}
int main()
{
cc
int min(int ,int );
int t;
cin>>t;
while(t--)
{
    int n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        ans=ans+min(c1,h+c0);
        else ans=ans+min(c0,h+c1);
    }
    cout<<ans<<endl;
}
return 0;
}