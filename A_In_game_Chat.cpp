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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==')') count++;
        else break;
    }
    
    if(count>n/2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
return 0;
}