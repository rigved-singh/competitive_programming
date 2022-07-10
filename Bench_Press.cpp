#include<bits/stdc++.h>

#define lli long long int
#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
lli tc;
cin>>tc;
while(tc--)
{
    lli n,w,wr;
    cin>>n>>w>>wr;
    lli req=w-wr;
    map<lli,lli> fuck;
    for(lli i=0;i<n;i++)
    {
        lli x;
        cin>>x;
        fuck[x]++;
    }
    if(req<=0) 
    {
        cout<<"YES"<<endl;
    }
    else
    {
        lli sum=0;
        for(auto it=fuck.begin();it!=fuck.end();it++)
        {
            if(it->second>=2)
            {
            if(it->second%2==0)
            {
                sum+=it->first*it->second;
            }
            else sum+=it->first*(it->second-1);
            }
        }
        if(sum>=req) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
return 0;
}