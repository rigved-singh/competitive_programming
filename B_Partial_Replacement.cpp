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
 
 
 
int main()
{
cc
ll t;
cin>>t;
while(t--)
{
     ll n,k;
     cin>>n>>k;
            string s;
            cin>>s;
       ll pos=-1;
       ll cnt=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]=='*')
           {
               s[i]='x';
               cnt++;
               pos=i;
               break;
           }
       }
       int last=-1;
        for(int i=n-1;i>=0;i--)
       {
           if(s[i]=='*')
           {
               s[i]='x';
               cnt++;
               last=i;
               break;
           }
           if(s[i]=='x') {last=pos; break;}
       }
      
       while(pos!=last)
       {
           ll p=pos;
          
                for(int j=p+1;j<=p+k;j++)
                {
                    if(s[j]=='*')
                    {
                        pos=j;
                    }
                    if(s[j]=='x') 
                    {
                        pos=last;
                        break;
                    }
                }
                if(pos==last) break;
                s[pos]='x';
                cnt++;
                

            
       }
       cout<<cnt<<endl;
    
}
return 0;
}