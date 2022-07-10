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
    lli n,k,x,y;
    cin>>n>>k>>x>>y;
    int res=k%4;
    if(x==y)
    cout<<n<<" "<<n<<endl;
    else if(x>y)
    {
        if(res==1)
        cout<<n<<" "<<y+n-x<<endl;
        else if(res==2)
        cout<<y+n-x<<" "<<n<<endl;
        else if(res==3)
        cout<<"0"<<" "<<x-y<<endl;
        else if(res==0)
        cout<<x-y<<" "<<"0"<<endl;

    }
    else if(x<y)
    {

        if(res==1)
        cout<<n+x-y<<" "<<n<<endl;
        else if(res==2)
        cout<<n<<" "<<n+x-y<<endl;
        else if(res==3)
        cout<<y-x<<" "<<"0"<<endl;
        else if(res==0)
        cout<<"0"<<" "<<y-x<<endl;
    }
    }
return 0;
}