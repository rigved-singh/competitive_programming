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
 bool isprime[1000001];
int arr[1000001]={0};
void seive()
{
   isprime[0]=true;
     isprime[1]=true;
     for(long long int i=2;i*i<1000001;i++)
     {
          if(!isprime[i])
          { 
            
               for(long long int j=i*i;j<=1000001; j+=i)
               {
                   
                   isprime[j]=true;
                   }
          }
     }  
}

int main()
{
cc
lli  t;
cin>>t;
seive();

   int cntr=0;
   for(int i=5;i<1000001;i++)
   {
       if(!isprime[i] && !isprime[i-2]) ++cntr;
       arr[i]=cntr;
   }
   
while(t--)
{

    lli n;
    cin>>n;

cout<<arr[n]<<endl;
 
}
return 0;
}