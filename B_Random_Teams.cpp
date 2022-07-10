#include<bits/stdc++.h>
#define MOD 1000000007
#define lli unsigned long long 
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
lli n,k;
cin>> n >> k;


lli mn=0,mx=0;
mx=n-(k-1);
mx=mx*(mx-1)/2;

lli mul=n/k;
mn+=(k-n%k)*(mul*mul-((mul*(mul+1))/2));
if(n%k!=0)
mul++;
mn+=(n%k)*(mul*mul-(mul*(mul+1)/2));
cout<<mn<<" ";
cout<<mx;

return 0;
}