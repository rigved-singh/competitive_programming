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
#define size 1000009 
int isprime[size];
void seive()
{
    for(lli i=2;i<size;i++)
    isprime[i]=1;

     for(int i=2;i*i<size;i++)
     {
          if(isprime[i])
               for(int j=i*i;j<size; j+=i)
                   isprime[j]=0;
     }
     for(lli i=1;i<size;i++)
isprime[i]+=isprime[i-1];
}
int main()
{
cc
int t;
cin>>t;
seive();

while(t--)
{
    lli count=0;
   lli a,b;
   cin>>a>>b;
   
     count=isprime[a];

   if(count<=b) cout<<"Chef"<<endl;
   else cout<<"Divyam"<<endl;
}
return 0;
}