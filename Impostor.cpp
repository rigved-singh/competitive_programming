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
    lli a;
    cin>>a;
    int arr[a];
    int ans=-1;
    double l=0;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        l=log2(arr[i]);
        if(floor(l)!=l)
        {
            ans=i;
            break;
        }
        

    }
    cout<<ans<<endl;
}
return 0;
}