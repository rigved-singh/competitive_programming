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
lli t;
cin>>t;
int i=1;
while(t--)
{
    lli n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1]) count++;
    }

    if(count==k) cout<<"Case #"<<i<<": "<<'0'<<endl;
    else {
        cout<<"Case #"<<i<<": "<<abs(count-k)<<endl;;
    }
    i++;
}
return 0;
}