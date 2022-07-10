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
    lli arrx[n];
    lli arry[n];
    for(lli i=0;i<n;i++)
    {
        cin>>arrx[i];
        cin>>arry[i];
    }
    if(n&1) 
    {
        cout<<"1"<<endl;
    }
    else 
    {
        sort(arrx,arrx+n);
        sort(arry,arry+n);
        lli ans=0;
        lli mid=n/2-1;
       
        ans=((arrx[mid+1]-arrx[mid])+1)*((arry[mid+1]-arry[mid])+1);
        cout<<ans<<endl;
    }
}
return 0;
}