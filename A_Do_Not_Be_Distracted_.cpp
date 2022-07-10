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
while(t--)
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    string sorted=s;
    sort(sorted.begin(),sorted.end());

    auto it=unique(sorted.begin(),sorted.end());

    sorted.erase(it,sorted.end());

    s.erase(unique(s.begin(),s.end()),s.end());

    if(sorted.size()==s.size())
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
return 0;
}