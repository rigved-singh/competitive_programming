#include <bits/stdc++.h>
using namespace std;
int digit(long long e)
{ int sum=0;
    while(e)
    {
        sum+=e%10;
        e=e/10;
    }
    return sum;
}
 bool prime[10000000];
void seive()
{
     prime[0]=true;
     prime[1]=true;
     for(int i=2;i*i<=10000000;i++)
     {
          if(!prime[i])
               for(int j=i*i;j<=10000000;j+=i)
               {
                   
                   prime[j]=true;
                   
               }
     }
    
}
int main()
{
    seive();

    long long int n;
    cin>>n;
    int sum=0;
    int sump=0;
    vector<long> primes;
    for(long int i=2;i<10000000;i++)
    if(!prime[i])
    primes.push_back(i);
    long x=n;
    while(x)
    {
        sum+=x%10;
        x=x/10;
    }
    
for(auto e: primes)
{
    if(n%e==0)
    {
        while(n%e==0)
        {
            sump+=digit(e);
            n=n/e;
        }
       
    }
    if(e>n) break;
}

if(sum==sump) cout<<"1"<<endl;
else cout<<"0"<<endl;
return 0;
    
}