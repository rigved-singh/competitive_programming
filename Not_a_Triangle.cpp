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
int stop=1;
int t;
cin>>t;
stop=t;

while(stop!=0)
{
lli arr[2001]={0};
for(int i=0;i<t;i++)
cin>>arr[i];
sort(arr,arr+t);
int ans=0;

for(int i=t-1;i>=2;i--)
{
    int x=arr[t-i-1];
   
    for(int j=t-i;j<i;j++)
    {
        if((x+arr[j])<arr[i] ) ans++;
    }
    
}


cin>>t;
stop=t;
}


return 0;
}