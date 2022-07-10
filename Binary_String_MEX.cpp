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
#define MAX 1000000
bool arr[MAX];
void sti(string s)
{
    lli ans=0;
    int j=0;
    for(lli i=s.size()-1;i>=0;i--)
    {
        ans+=(s[i]-48)*pow(2,j);
        j++;
    }
    arr[ans]=true;
}

int main()
{
cc
lli t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    for(lli i=0;i<s.size();i++)
    {
        string sen;
        for(lli j=1;j<=s.size()-i;j++)
       {
           sen=s.substr(i,j);
           sti(sen);

       } 
       
    }
    cout<<i<<endl;
    for(lli i=0;i<MAX;i++)
    {
        if(arr[i]==false)
         {
             if(i==0) 
            while(i)
            {
                if(i&1) cout<<1;
                else cout<<0;
                i>>1;
            }
            cout<<0<<endl;
            
            break;
        }
    }

}

return 0;
}