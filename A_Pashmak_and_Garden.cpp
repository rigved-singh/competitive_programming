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
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if(abs(x2-x1)!=abs(y2-y1)&&x1!=x2&&y1!=y2) cout<<"-1"<<endl;
else
if(x1==x2||y1==y2)
{
    if(x1==x2)
    {
        cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x2+abs(y2-y1)<<" "<<y2;
    }
    else 
    {
        cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y2+abs(x2-x1);
    }
}
else {
    cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
}
return 0;
}