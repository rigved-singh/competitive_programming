#include<iostream>
#define lli long long int

using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli t;
cin>>t;
while(t--)
{
  lli a,b;
    cin>>a>>b;
lli no=b-a+1;
lli ans=0;
ans=2*no-1;
cout<<ans<<endl;
}
return 0;
}