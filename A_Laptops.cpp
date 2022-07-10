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
multimap<int,int> mp;
for(int i=0;i<n;i++)
{
    lli a,b;
    cin>>a>>b;
    mp.insert(make_pair(a,b));
}
int flg=1;
auto it1=mp.begin();
auto it2=mp.begin();
it2++;
for(;it2!=mp.end();it1++,it2++)
{
    if(it1->first<it2->first&&it1->second>it2->second)
    {
        cout<<"Happy Alex"<<endl;
        flg=0;
        break;
    }
}
if(flg) cout<<"Poor Alex"<<endl;
return 0;
}