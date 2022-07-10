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
string s;
lli m;
lli n;
cin>>n>>s>>m;
for(lli i=0;i<n;i++)
{ int x=m;
    if(s[i]>='a'&&s[i]<='z')
    {
            while(x--)
            {
                if(s[i]=='z')
                s[i]='a';
                else 
                s[i]+=1;

            }
            
    }
    if(s[i]>='A'&&s[i]<='Z')
    {
            while(x--)
            {
                if(s[i]=='Z')
                s[i]='A';
                else 
                s[i]+=1;

            }
            
    }
}
    cout<<s;
return 0;
}