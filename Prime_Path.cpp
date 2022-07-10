#include<bits/stdc++.h>
#define MOD 1000000007
#define endl "\n"
#define lli long long int
#define ll long long
#define vi vector<int>
#define vll vector<long long >
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
#define rep(i,s,n) for(ll i=s;i<n;i++)
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// EKMC kabhi memset mat use karna 
 //ll n ;
 //ll arr[1001][1001] ;
 // bool vis[1000001];
 template<typename T>
T ceil( T x , T n)
 { 
T ans=0;
 ans=x/n; 
 if(x%n) ans++;
return ans;
}
template<typename P>
 P Lcm (P a, P b)
 {
 return (a*b)/__gcd(a,b);
}
 template <typename G>
 void swap(G *a, G *b)
 {
 ll temp=a; a=b; b=a;
}
/*---------------------------------------------------------------------------------------------
+--------------+-----------+
| Alternative  |  Primary  |
+--------------+-----------+
|    <%        |    {      |
|    %>        |    }      |
|    <:        |    [      |
|    :>        |    ]      |
|    %:        |    #      |
|    %:%:      |    ##     |
|    and       |    &&     |
|    bitor     |    |      |
|    or        |    ||     |
|    xor       |    ^      |
|    compl     |    ~      |
|    bitand    |    &      |
|    and_eq    |    &=     |
|    or_eq     |    |=     |
|    xor_eq    |    ^=     |
|    not       |    !      |
|    not_eq    |    !=     |
+--------------+-----------+
Problem related to maths -----> think gcd
CODE-------------------------------------------------------------------
---------------------------------------------------------------------------------------- */
 vi ar[10001];
 bool visited[10001];
 int dis[10001];
 vector<int> primes;
 bool isprime(int n)
 {
     for(int i=2;i*i<=n;i++)
     {
         if(n%i==0) return false;
     }
     return true;
 }
 bool check(int a,int b)

 {
     int count=0;
     while(a)
     {
         if(a%10 != b%10) count++;
           a/=10 , b/=10;
     }
     if(count==1) return true;
     
     return false;
 }
 void buildgraph()
 {
     for(int i=1000;i<=9999;i++)
        if(isprime(i)) primes.pb(i);

     for(int i=0;i<primes.size();i++)
     {
         for(int j=i+1;j<primes.size();j++)
         {
             int a=primes[i];
             int b=primes[j];
                if(check(a,b)) 
                    ar[a].pb(b) , ar[b].pb(a);
         }
     }
 }
 
 void bfs(int src)
 {
     visited[src]=1;
     queue<int> q;
     q.push(src);
     int curr=src;
     dis[src]=0;
     
     while(!q.empty())
     {
        for(auto child : ar[curr])
        {
                if(visited[child]==0)
                {
                  q.push(child) ,  visited[child]=1, dis[child]=dis[curr]+1;
                }
                
        }
        q.pop();
        curr=q.front();
                
    }
 }
int main()
{
cc

 buildgraph();
int t;
cin>>t;

cout<<endl;
while(t--)
{
    int a,b;
    cin>>a>>b;
    for(int i=1000;i<=9999;i++) dis[i]=-1 , visited[i]=0;
    bfs(a);
    if( dis[b]==-1 ) cout<<"Impossible";
    else cout<<dis[b];
    cout<<endl;

}
return 0;
}