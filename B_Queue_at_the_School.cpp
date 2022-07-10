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
int n,k;
cin>>n>>k;
string s;
cin>>s;
while(k--)
{
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            char c;
            c=s[i];
            s[i]=s[i+1];
            s[i+1]=c;
            i+=1;
            
        }
    }
    
}
cout<<s<<endl;
return 0;
}