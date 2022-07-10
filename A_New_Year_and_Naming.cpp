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
lli n,m;
cin>>n>>m;
string a[n];
string b[m];
for(lli i=0;i<n;i++)
cin>>a[i];
for(lli i=0;i<m;i++)
cin>>b[i];



lli t;
cin>>t;
while(t--)
{
    lli c;
    cin>>c;
    
   string ans=
"";
   c--;
 ans=a[c%n]+b[c%m];
     
    cout<<ans<<endl;
}
return 0;
}