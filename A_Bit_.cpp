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
int t;
int ans=0;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    if(s[0]=='+'||s[0]=='-')
     {
        if(s[0]=='+')
        ++ans;
        else --ans;
    }
    else if(s[s.size()-1]=='+'||s[s.size()-1]=='-')
    {
        if(s[s.size()-1]=='+')
        ans++;
        else 
        ans--;
    }

}
cout<<ans<<endl;
return 0;
}