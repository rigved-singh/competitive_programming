#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define vll vector<ll >  
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// look for terminators after if statement 
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll a , b;
        cin>> a >> b;
        string s;
        cin>> s;
        bool valid =true;
        int n=(int)s.size();
       
        for(int i=0;i<n/2;i++)
        {
            int j=n-i-1;

            if(s[i]=='?' and s[j]=='?')
            continue;

            if(s[i]=='0' && s[j]=='?')
            {
                s[j]='0' ;
                a-=2;
            }
            else if(s[i]=='1' and s[j]=='?')
            {
                s[j]='1';
                b-=2;
            }
            else
            if(s[i]=='?' and s[j]=='0')
            {
                s[i]=s[j];
                a-=2;

            }else
            if(s[i]=='?' and s[j]=='1')
            {
                s[i]=s[j];
                b-=2;

            }
            else if(s[i]==s[j] and s[i]=='0') {
                a-=2;
            
            }
            else if(s[i]==s[j] and s[i]=='1')
            {
                b-=2;
            }
            else if(s[i]!=s[j]) {
                valid=false ;
            
            }
        }
        for(int i=0;i<n/2;i++)
        {
            int j=n-i-1;
            if(s[i]==s[j] and s[i]=='?'){
                if(a>1)
                {
                    s[i]='0' , s[j]='0';
                    a-=2;
                }
                else
                {
                    s[i]='1' ; s[j]='1';
                    b-=2;
                }
            }
                
            }
        
        if((n%2==1) && s[n/2]=='?' )
        {
            if(a>0) {
                s[n/2]='0' ; 
            a-- ;
            }
            else {
                s[n/2]='1' ;b--;
            }
        }else if(n%2==1 and s[n/2]=='1')
        {
            b--;
        }
        else if(n%2==1 and s[n/2]=='0') a--;
        
        if(!valid) cout<<-1 << '\n';
        else {
          
            if(a!=0 || b!=0) cout<<-1 <<'\n';
            else cout<< s<< '\n';
        }
    }
return 0;
}
//??00?101??1?0?100??