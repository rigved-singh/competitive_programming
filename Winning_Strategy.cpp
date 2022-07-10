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
    lli n;
    cin>>n;
    lli arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n,greater<>());
    if(n==1) cout<<"first"<<endl;
    if(n==2) {
        if(arr[1]>arr[0]) cout<<"second"<<endl;
    else if(arr[1]<arr[0]) cout<<"first"<<endl;
    else cout<<"draw"<<endl;
    }
    if(n>=3)
    {
    lli score1=arr[0];
    lli score2=arr[1]+arr[2];
    for(int i=3;i<n;i+=2)
    score1+=arr[i];
    for(int i=4;i<n;i+=2)
    score2+=arr[i];
    if(score1>score2) cout<<"first"<<endl;
    else if(score1<score2) cout<<"second"<<endl;
    else cout<<"draw"<<endl;
    }
}
return 0;
}