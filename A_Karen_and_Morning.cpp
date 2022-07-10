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
 
 bool check(int hrs,int mm)
 {
     int a=hrs/10;
     int b=hrs%10;
     int c=mm/10;
     int d=mm%10;
     if(a==d && b==c) return false;
      
      return true;
 }

int main()
{
cc
string s;
cin>>s;
int cnt=0;
int hrs=stoi(s.substr(0,2));
int mm=stoi(s.substr(3,2));
while(check(hrs,mm))
{
    mm++;
    cnt++;
    if(mm==60) 
    {
        hrs+=1;
        mm=0;
    }
    if(hrs==24) hrs=0;
}
cout<<cnt<<endl;
return 0;
}