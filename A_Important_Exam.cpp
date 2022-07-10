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
string s[n];
for(lli i=0;i<n;i++)
{
    cin>>s[i];
}
string cmp="";

for(lli i=0;i<m;i++)
{
    int arr[25]{0};

    for(lli j=0;j<n;j++)
    {
        arr[s[j][i]-65]++;
    }
    int mx=0;
    int pos=0;
    for(lli i=0;i<25;i++)
    {
        if(arr[i]>mx) {
            mx=arr[i];
            pos=i;
        }

    }
    cmp+=char(pos+65);
    
}
lli marks[m];
lli ans=0;
for(int i=0;i<m;i++)
cin>>marks[i];
for(lli i=0;i<n;i++)
{
    for(lli j=0;j<m;j++)
    {
        if(s[i][j]==cmp[j]) ans+=marks[j];
    }
}
cout<<ans<<endl;

return 0;
}