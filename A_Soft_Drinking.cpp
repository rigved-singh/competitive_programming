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
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int count=0;
    int dam=k*l;
    int lemons=c*d;
    while(dam>=nl*n&&lemons>=n&&p>=n*np)
    {
        count++;
        dam-=n*nl;
        lemons-=n;
        p-=n*np;

    }
    cout<<count<<endl;

return 0;
}