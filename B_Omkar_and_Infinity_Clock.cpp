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
lli t;
cin>>t;
while(t--)
{
    lli n,k;
    cin>>n>>k;
    lli arr[n];
    lli mx=INT_MIN;
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx) mx=arr[i];
    }
    for(lli i=0;i<n;i++)
    {
        arr[i]=mx-arr[i];
    }
    k--;
    mx=INT_MIN;
    for(lli i=0;i<n;i++)
    {
         if(arr[i]>mx) mx=arr[i];

    }
    if(k%2==0)
    {
        for(auto e: arr) cout<<e<<" ";
        cout<<endl;
    }
    else {
        for(auto e: arr) cout<<mx-e<<" ";
        cout<<endl;
    }
}
return 0;

}


