#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli t;
cin>>t;
while(t--)
{ string s;
    cin>>s;
    int dt=0;
    int lc=0;int uc=0;int sm=0;
    if(s.length()<10) cout<<"NO"<<"\n";
    else    {
        for(int i=1;i<s.size()-1;i++)
         {
            if(s[i]>=97&&s[i]<=122) lc++;
            else if(s[i]>=65&&s[i]<=90) uc++;
            else if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='?'||s[i]=='&') sm++;
            else if(s[i]>=48&&s[i]<=57) dt++;
            }
        if(s[0]>=97&&s[0]<=122) lc++;

                 if(s[s.size()-1]>=97&&s[s.size()-1]<=122) lc++;
         if(lc&&uc&&sm&&dt) cout<<"YES"<<"\n";
             else cout<<"NO"<<"\n";
    }
}
return 0;
}