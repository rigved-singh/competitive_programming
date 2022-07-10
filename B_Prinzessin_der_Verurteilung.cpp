#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    ll t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>>n ;
        string s;
        cin>> s;
        char ch='a';
        string tw="aa";
        string three="aaa";
        bool ok =true;
        while(ok)
        {
            if(s.find(ch)==string::npos){
                cout<< ch << '\n';
                ok=false;
                break;
            }
            if(ch=='z')break;
            else ch++;
            
        }
        while(ok)
        {
            int pos=-1;
            for(int i=0;i<n-1;++i)
            {
                if(s[i]==tw[0] and s[i+1]==tw[1]){
                    pos=i;
                    break;
                }
            }

            if(pos==-1){
                cout<< tw <<'\n';
                ok=false;
                break;
            }

            if(tw=="zz") break;

            else if(tw[1]=='z'){
                tw[0]++;
                tw[1]='a';

            }
            else {
                tw[1]++;
            }
        }
        while(ok)
        {
             if(s.find(three)==string::npos)
            {
                cout<< three << '\n';
                ok=false;
                break;
            }
            else if(three=="zzz") break;
            else if(three[2]=='z')
            {
                if(three[1]=='z'){
                    three[0]++;
                    three[1]='a';
                    three[2]='a';
                }
                else{
                    three[1]++;
                    three[2]='a';
                }
            }
            else three[2]++;
        }

    }
return 0;
}