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
long n;
cin>>n;
long  mx=0;
long mxs=0;
for(long i=0;i<n;i++)
{
    long x,y;
    cin>>x>>y;
    if(x==mxs&&y==mx){
        cout<<i+1<<" ";
        if(x>mxs) mxs=x;
        if(y>mx) mx=y;
    }
    else 
    if(x>mxs||y>mx){
        cout<<i+1<<" ";
        if(x>mxs) mxs=x;
        if(y>mx) mx=y;

    } 
}
return 0;
}