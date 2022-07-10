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
double a,b,c;
cin>>a>>b>>c;
int count=0;
int k=0;
int flg=1;
double ans=a/b;

while(b--)
{
    ans*=10;
    lli k=ans;
    if(k%10==c){
        flg=0;
        count++;
        break;
    }
    else count++;

}
if(flg) cout<<"-1"<<endl;
else cout<<count<<endl;


return 0;
}