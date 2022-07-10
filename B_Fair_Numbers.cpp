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
   unsigned lli n;
    cin>>n;
    unsigned lli k=n;
    while(k)
    {
        if(k%10==0)
        {
            k/=10;
            continue;
        }
        if(n%(k%10)!=0) {
            n++;
            k=n;
        }
        else k/=10;
    }
    cout<<n<<endl;
}
return 0;
}