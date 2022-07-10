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
    string s;
    cin>>s;
    int raz[2]={0};
    int bre[2]={0};
    for(int i=0;i<n;i+=2)
    {
        if((s[i]-48)&1)raz[1]++;
        else raz[0]++;
    }
    for(int i=1;i<n;i+=2)
    {
        if((s[i]-48)&1)bre[1]++;
        else bre[0]++;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            if(raz[0]!=0)
            raz[0]--;
            else raz[1]--;
        }
        if(i%2==1)
        {
            if(bre[1]!=0)
            bre[1]--;
            else bre[0]--;
        }
    }
    if(raz[0]!=0||bre[0]!=0) cout<<2<<endl;
    else cout<<1<<endl;
    
    
}
return 0;
}