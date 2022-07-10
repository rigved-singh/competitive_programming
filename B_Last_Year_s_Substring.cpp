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
int main()
{

lli t;
cin>>t;
while(t--)
{
     int n;
    cin>>n;
    string s;
    cin>>s;
   
    int flag=0;
   for(int i=0;i<=4;i++)
   {
       string t1=s.substr(0,i);
       string t2=s.substr(n-4+i);
string t3=t1+t2;
       if(t3=="2020") flag=1;
   }




    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}