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
cin>>n>> k;

string fav[50];
string lu[50];

for(int i=0;i<n;i++)
cin>>fav[i];

for(int i=0;i<k;i++)
cin>>lu[i];

for(int i=0;i<k;i++)
{
    bool is=true;
    for(int j=0;j<n;j++)
    {
        if((lu[i].find(fav[j]))!=string::npos||lu[i].size()>=47)
        {
        cout<<"Good"<<endl;
        is=false;
        break;
        }
        
    
    }

    if(is) cout<<"Bad"<<endl;
    
}


return 0;
}