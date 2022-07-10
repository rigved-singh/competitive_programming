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
lli t ;
cin>>t;
while(t--)
{
    lli c=0,d=0,i=0;
    cin>>c>>d>>i;
   unsigned long long  min=0,max=0;
   max=(c+d)*4;
    if(c>2*d)
        min=(d+(c-2*d))*4;
        else min=d*4; 
    if(i%4!=0)
    cout<<"no"<<endl;
    else
    if(i>=min&&i<=max)
    cout<<"yes"<<endl;
}
return 0;
}