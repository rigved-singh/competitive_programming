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
string a,b;
cin>>a>>b;
int count=0;
for(int i=0;i<a.size();i++)
{
    if(tolower(a[i])>tolower(b[i]))
    {
        cout<<"1"<<endl;
        break;
    }
    else if(tolower(a[i])<tolower(b[i])) {
        cout<<"-1"<<endl;
        break;
    }
    count++;
}
if(count==a.size()) cout<<"0"<<endl;
}
