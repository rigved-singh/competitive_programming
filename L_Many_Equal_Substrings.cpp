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
lli n,k;
cin>>n>>k;
string s;
cin>>s;
int i=0;
int j=n-1;
int count=0;
while(i<j)
{
    if(s[i]==s[j])
    count++;
    else break; 
    i++;
     j--;
}
for(lli i=0;i<k;i++)
{
    if(i==0) cout<<s;
    else
    {

        for(lli j=count;j<s.size();j++)
        cout<<s[j];
    }
}

return 0;
}