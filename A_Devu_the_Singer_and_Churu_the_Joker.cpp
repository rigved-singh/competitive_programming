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
lli a,b;
cin>>a>>b;
int arr[1001];
int sum=0;
for(int i=0;i<a;i++)
{
cin>>arr[i];
sum+=arr[i];
}
if(sum+(a-1)*10>b) cout<<"-1"<<endl;
else cout<<(b-sum)/5<<endl;

return 0;
}