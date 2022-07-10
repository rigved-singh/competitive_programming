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
//CODE-------------------------------------------------------------------
//---------------------------------------------------------------------------------------- 
 
 

int main()
{
cc
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;

    }
    cout<<n*3<<endl;
    for(int i=1;i<=n;i+=2){
	cout<<2<<" " << i<< " " << i+1<<endl;	// space(2),enter(i),space(i+1);
		cout<<1<< " "<< i<< " " << i+1<< endl;// space(1),space(i),enter(i+1);
		cout<<2<< " "<< i<< " "<< i+1<<endl;// space(2),enter(i),space(i+1);
		cout<<2<< " "<< i<< " "<< i+1<<endl;// space(2),enter(i),space(i+1);
		cout<<1<< " "<< i<< " " << i+1<< endl;// space(1),space(i),enter(i+1);
			cout<<2<< " "<< i<< " " << i+1<< endl;// space(2),enter(i),space(i+1);
	}

}
return 0;
}