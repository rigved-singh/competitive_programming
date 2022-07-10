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
lli lo=0;
lli up=0;
lli flag=0;
string s;
cin>>s;
lli pos=0;
for(lli i=0;i<s.size();i++)
{
    if(isupper(s[i])&&flag) {
       
        up++;
        lo+=i-pos-1;
         pos=i;
    }
    else if(islower(s[i])){
        flag=1;
    } 
    
}
if(lo>up) cout<<up;
else cout<<lo;
return 0;
}