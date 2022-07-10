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
cin>>t;
while(t--)
{
 int m,x,y;
 cin>>m>>x>>y;
 int arr[101];

 for(int i=0;i<=100;i++)
 arr[i]=0;

while(m--)
{
    int j=0;
int val;
cin>>val;
for(j = max(val-x*y,1) ;j<=min(val+x*y,100);j++)
arr[j]++;
}
int count=0;
for(int i=1;i<=100;i++)
if(arr[i]==0)
count++;
cout<<count<<endl;
}

return 0;
}