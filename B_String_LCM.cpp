#include<bits/stdc++.h>
#include<algorithm>
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
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else      
     return gcd(b,a%b);
}
int main()
{
cc
int t;
cin>>t;
while(t--)
{ 
   string s,s1;
   cin>>s>>s1;
   string s2,s3;
   s2=s;
   s3=s1;
lli length=gcd(s.size(),s1.size());
length=(s.size()*s1.size())/length;
while(s.size()<length)
s+=s2;
while(s1.size()<length)
s1+=s3;
if(s==s1) cout<<s<<endl;
else cout<<"-1"<<endl;
    

}
return 0;
}
