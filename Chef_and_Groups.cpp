#include<bits/stdc++.h>
#define lli long long int

#define cc ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
cc
int test;
cin>>test;
while(test--)
{
    string st;
    cin>>st;
     lli ans=0;
     for(lli i=0;i<st.size()-1;i++)
     {
         if(st[i]=='1'&&st[i+1]=='0')
         ans++;
     }
     if(st[st.size()-1]=='1')
     ans++;
     cout<<ans<<endl;

}
return 0;
}