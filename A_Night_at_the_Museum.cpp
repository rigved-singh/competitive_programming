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
string s;
cin>>s;
int curr=0;
int ans=0;
ans+=min(s[0]-'a',122-s[0]+1);
curr=int(s[0]);

for(lli i=1;i<s.size();i++)
{
    if(s[i]<curr)
    {
        ans+=min(abs(curr-s[i]),(122-curr)+1+(s[i]-97));
        curr=s[i];
    }
    else{
        ans+=min((s[i]-curr),((curr-97)+1+(122-s[i])));
        curr=s[i];
    }
    
}
cout<<ans<<endl;
return 0;
}