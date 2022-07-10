#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int n;
    cin>> n;
    string s;
    cin>> s;
    int a=0,g=0,c=0,t=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A') a++;
        else if(s[i]=='G') g++;
        else if(s[i]=='T')t++;
        else if(s[i]=='C')c++;
    }
     
    if(a>n/4 || t>n/4 || c>n/4 || g > n /4 ||n%4!=0)
    {
        cout<<"===";
        return 0;
    }
 
    else {
        a=n/4-a;
        g=n/4-g;
        c=n/4-c;
        t=n/4-t;
    }
 
    for(int i=0;i<n;i++)
    {
       
        if(s[i]=='?')
        {
            if(a){
                s[i]='A';
                a--;

            }
            else if(g){
                s[i]='G';
                g--;
            }
            else if(c){
                s[i]='C';
                c--;
            }
            else if(t){
                s[i]='T';
                t--;
            }
        }
    }
    cout<< s;
return 0;
}