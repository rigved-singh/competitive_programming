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
    vector<int> s;
    lli k;
    cin>>k;
    string n;
    cin>>n;
    int j=3;
    lli sum=0;
    lli i=0;
    for(auto it =n.begin();it!=n.end();it++)
    { 
           sum+=(*it-48)*pow(2,j);
           j--;
           i++;
          
           if(i%4==0)
           {
               s.pb(sum+97);
               sum=0;
               j=3;

           }
    }
    
for(auto it =s.begin();it!=s.end();it++)
{
    cout<<char(*it);   
}
cout<<endl;

}
return 0;
}