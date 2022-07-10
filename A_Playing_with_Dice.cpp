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
int a,b;
cin>>a>>b;
int ans1=0,ans2=0,ans3=0;
for(int i=1;i<=6;i++)
{
    if(abs(i-a)<abs(i-b))
    ans1++;
    else
    if(abs(i-a)==abs(i-b))
    ans3++;
    else
    if(abs(i-a)>abs(i-b))
    ans2++;
   
}
cout<<ans1<<" "<<ans3<<" "<<ans2;

return 0;
}