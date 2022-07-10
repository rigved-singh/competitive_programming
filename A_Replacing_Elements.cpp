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
{ bool poss=false;
    lli n,d;
    cin>>n>>d;
    int ar[101];
    for(int i=0;i<n;i++)
    cin>>ar[i];

    sort(ar,ar+n);
    if(ar[n-1]<=d)
    {
    cout<<"YES"<<endl;
    poss=true;
    }
    else {
        int sum=ar[0]+ar[1];
        if(sum<=d)
        {cout<<"YES"<<endl;
        poss=true;
        }

    }
    if(!poss)
    cout<<"NO"<<endl;
}
return 0;
}