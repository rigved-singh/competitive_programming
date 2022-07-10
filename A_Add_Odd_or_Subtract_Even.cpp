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
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<"0"<<endl;
    else if(a<b)
    {
        if(a%2==0&&b%2==0||a%2==1&&b%2==1) cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
    if(a>b)
    {
          if(a%2==0&&b%2==0||a%2==1&&b%2==1) cout<<"1"<<endl;
          else cout<<"2"<<endl;
    }
    
}
return 0;
}