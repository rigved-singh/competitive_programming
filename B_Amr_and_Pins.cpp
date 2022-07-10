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
lli x,y,r,xf,yf;
cin>>r>>x>>y>>xf>>yf;
double dist=sqrt((xf-x)*(xf-x)+(yf-y)*(yf-y));
cout<<ceil(dist/(2*r))<<endl;
return 0;
}