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
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    lli arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int flg=1;
    for(lli i=0;i<n;i++)
    {
        lli sum=0;
        for(lli j=i;j>=0;j--)
        sum+=arr[j];
        if(sum<i*(i+1)/2){
            flg=0;
            break;
        }
    }
    if(flg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}