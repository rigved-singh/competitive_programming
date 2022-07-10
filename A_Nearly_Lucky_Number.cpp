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
cc
lli n;
cin>>n;

int count=0;
while(n)
{
    if(n%10==4||n%10==7)
    {
        count++;
    }
    
    n/=10;
}
if(count==0) cout<<"NO\n";
else{


int flag=0;
while(count)
{
  if(count%10!=4&&count%10!=7)
  {
      flag=1;
      break;
  }
  count/=10;

}
if(flag==0) cout<<"YES"<<endl;
else cout<<"NO\n";
}
return 0;
}