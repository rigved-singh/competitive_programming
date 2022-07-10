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
lli n;
cin>>n;
char a;
set<char> s;
set<char> s1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a;
        if(i==j || i==n-j-1)
        s.insert(a);
        else s1.insert(a);
    }
}
auto it=s.begin();
auto it1=s1.begin();
if(s.size()!=1||s1.size()!=1||*it==*it1) cout<<"NO\n";
else cout<<"YES\n";
return 0;
}