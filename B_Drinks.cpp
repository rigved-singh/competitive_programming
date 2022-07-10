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
lli n;
cin>>n;
double x=0;
double ans=n;
for(lli i=0;i<n;i++)
{
    double c=0;
    cin>>c;
    c=c/100;
    x+=c;
}
cout<<fixed<<setprecision(12)<<(x/ans)*100<<endl;
return 0;
}