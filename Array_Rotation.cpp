#include<bits/stdc++.h>
const long long MOD=1e9+7;
#define lli long long int

using namespace std;
int main()
{
lli n;
cin>>n;
lli sum=0;
for(lli i=0;i<n;i++)
{
  lli x;
  cin>>x;
  if(sum<0)
    sum=(sum%MOD+x%MOD)%MOD;
    else
    {
        while(sum<0)
        {
            sum+=MOD;

        }
        while(x<0)
        {
            x+=MOD;

        }
        sum+=x;
    }
}
lli t;
cin>>t;
while(t--)
{
    lli x;
    cin>>x;
    if(sum>=0)
    sum=((sum%MOD)*2)%MOD;
    else
    {
        sum=((abs(sum)%MOD)*2)%MOD;
        sum=-1*sum;

    }
    cout<<sum<<'\n';

}


return 0;
}