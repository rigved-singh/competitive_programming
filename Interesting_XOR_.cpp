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
{
    lli n;
    cin>>n;
    lli a=0,b=0;
    int x=0;
    for(int i=30;i>=0;i--)
    {
        if(n&(1<<i))
        {
            x=i;
            break;
        }
    }
        int d=ceil(log2(n));
        for(int i=x-1;i>=0;i--)
        {
            if(n&(1<<i))
            {
                b=b|(1<<i);
            }
            else{
                a=a|(1<<i);
                b=b|(1<<i);
            }
        }
        a=a|(1<<x);
        cout<<a*b<<endl;

    }

return 0;
}