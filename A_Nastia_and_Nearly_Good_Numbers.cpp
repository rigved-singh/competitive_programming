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
bool check (int a,int b, int c)
{
    if(c%a==0&&c%b==0) return true ;
else return false;

}
int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    lli a,b;
    cin>>a>>b;
    if(b==1) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
    }
}
return 0;
}