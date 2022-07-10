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
int x;
cin>>x;
string s;
cin>>s;
int count=1;
int ans=0;
string xx="xxx";
while(count)
{ 
    count=0;
    if(s.find(xx)!=string::npos)
    {
        count=1;
        s.erase(s.begin()+s.find(xx));
        ans++;
    }
}
cout<<ans;

return 0;
}