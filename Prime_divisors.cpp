#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<fstream>
#include<math.h>
#include<ctype.h>
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
vector<bool> a(1000001);
void sieve(int x)
{
 
 a[0]=false;
 a[1]=false;
 for(int i=2;i*i<=x;i++)
 {
     if(x%i==0)
{
    a[i]=false;
    for(int j=i;j<100;j+=i)
    {
        a[j]=false;
    }
 }
 }
}
int sumofprimes(int x)
{ int sum=0;
    void seive(int x);
    for(int i=2;i<x;i++)
    {
        if(a[i])
        {
            if(a[i]%i==0)
            sum+=i;
        }
    }
    return sum;
}
int main()
{
cc 
int t;
int count=0;
cin>>t;
int sumofprimes(int x);
while(t--)
{ 
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
        if(arr[j]%arr[i]==0)
        {
            int a,b;
            a=sumofprimes(arr[i]);
            b=sumofprimes(arr[j]);
            if(b%a==0)
            count++;

        }

        
    }
    cout<<count<<endl;
    
}

return 0;
}