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
int t;
cin>>t;

while(t--)
{
    string s;
    string ampm;

cin>>s>>ampm;
    int hh=0;
    int mm=0;
    int mt=0;
    if(ampm=="AM")
    {
        hh=(((s[0]-48)*10+(s[1]-48))%12)-12;
        mm=(s[3]-48)*10+(s[4]-48);
    }
    else
    {
        hh=(((s[0]-48)*10+(s[1]-48))%12)+12;
        mm=(s[3]-48)*10+(s[4]-48);    
    }
    
     mt=hh*60+mm;
    lli n;
    cin>>n;
    while(n--)
    {
        string frsampm;
        string freampm;
        int hhfrs=0;
        int mmfrs=0;
        int hhfre=0;
        int mmfre=0;
        int mtfrs=0;
        int mtfre=0;
        string frs;
        string fre;
        cin>>frs>>frsampm>>fre>>freampm;
        if(frsampm=="AM")
    {
        hhfrs=(((frs[0]-48)*10+(frs[1]-48))%12)-12;
        mmfrs=(frs[3]-48)*10+(frs[4]-48);
        
    }
    else
    {
        hhfrs=(((frs[0]-48)*10+(frs[1]-48))%12)+12;
        mmfrs=(frs[3]-48)*10+(frs[4]-48);
       
    }
     if(freampm=="AM")
    {
        hhfre=((((fre[0]-48)*10)+(fre[1]-48))%12)-12;
        mmfre=(fre[3]-48)*10+(fre[4]-48);
      
    }
    else
    {
        hhfre=((((fre[0]-48)*10)+(fre[1]-48))%12)+12;
        mmfre=(fre[3]-48)*10+(fre[4]-48);
        
    }
     mtfrs=hhfrs*60+mmfrs;
        mtfre=hhfre*60+mmfre;
        
    if(mtfrs<=mt&&mtfre>=mt) cout<<"1";
    else cout<<"0";
    }
    cout<<endl;

}
return 0;
}