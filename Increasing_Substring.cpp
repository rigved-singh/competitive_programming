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
int cnt=1;
while(t--)
{
    lli n;
    cin>>n;
    string s;
    cin>>s;
    lli arr[n]{0};
    arr[0]=1;
    int count=1;
    for(lli i=1;i<n;i++)
    {
        if(s[i]<=s[i-1]) count=1;
        else count++;
        arr[i]=count;
        
    }
    cout<<"Case #"<<cnt<<": ";
    for(lli i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cnt++;
}
return 0;
}