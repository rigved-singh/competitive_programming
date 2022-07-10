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
lli v;
cin>>v;
si ans;
 lli count=0;
while(t--)
{ count++;
    lli x;
    cin>>x;
   
    for(lli i=0;i<x;i++)
    {
        lli p;
        cin>>p;
        if(p<v) ans.insert(count);
    }
}
cout<<ans.size()<<endl;
if(ans.size()!=0)
for(auto e: ans) cout<<e<<" ";
return 0;
}