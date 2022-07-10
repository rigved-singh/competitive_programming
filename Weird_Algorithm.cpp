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
cout<<n<<" ";
while(n>1)
{
    if(n%2==0)
    {
        n/=2;
        cout<<n<<" ";
    }
    else
    {
        n=(n*3)+1;
        cout<<n<<" ";

    }
    
}

return 0;
}