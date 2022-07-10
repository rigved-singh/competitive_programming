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
int arr[]={4,7,47,74,444,447,474,744,777,774,747,477};
lli n;
cin>>n;
int flag=1;
for(int i=0;i<12;i++)
{
    if(n%arr[i]==0) {
        cout<<"YES"<<endl;
        flag=0;
        break;
    }
}
if(flag) cout<<"NO"<<endl;
return 0;
}