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
string s,t;
cin>>s>>t;
int ans=0;
int flag=1;
lli i=0;
while(flag)
{
    flag=0;
    
    if(s.find(t) !=string::npos)
    {
        
        ans++;
        flag=1;
        s.erase(0,s.find(t)+t.size()-1);
    }

}
cout<<ans<<endl;

return 0;
}