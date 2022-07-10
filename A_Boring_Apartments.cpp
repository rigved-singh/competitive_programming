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
    int dig=n%10;
    lli x=n;
    int len=0;
    while(x)
    {
        len++;
        x/=10;
    }

    cout<<(dig-1)*10+len*(len+1)/2<<endl;

}
return 0;
}