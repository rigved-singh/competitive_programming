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
    lli n,a,b;
    cin>>n>>a>>b;
    lli sums=0,suma=0;
    string com="EQUINOX";
    for(lli i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(com.find(s[0])!=string::npos) sums+=a;
        else suma+=b;
    }
   
    if(sums==suma) cout<<"DRAW"<<endl;
    else
    if(sums>suma) cout<<"SARTHAK"<<endl;
    else if(sums<suma) cout<<"ANURADHA"<<endl;
    
}
return 0;
}