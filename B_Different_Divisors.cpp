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

 bool isprime[10000000];
void seive()
{
     isprime[0]=true;
     isprime[1]=true;

     for(int i=2;i*i<=10000000;i++)
     {
          if(!isprime[i])
               for(int j=i*i;j<=10000000; j+=i)
               {
                   
                   isprime[j]=true;
                   
               }
     }
    
}
int main()
{
cc
int t;
cin>>t;
seive();
while(t--)
{
    lli a;
    cin>>a;
    lli b,c;
    int i=2;
    for(;;i++)
    {
        if((!isprime[i])&&i-1>=a)
        {
            b=i;
            break;
        }
    }


 for(int j=i+1;;j++)
    {
        if((!isprime[j])&&j-b>=a)
        {
            c=j;
            break;
        }
    }


cout<<b*c<<endl;
}
return 0;
}