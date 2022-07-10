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
    bool isless=false;
    int n,m;
    cin>>n>>m;
    lli an[1001],am[1001];
 long long int sumn=0;
     long long int summ=0;
    for(int i=0;i<n;i++)
    {
        cin>>an[i];
        sumn+=an[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>am[i];
        summ+=am[i];
    }
    bool isgreater=false;
    int swaps=0;
    if(sumn>summ)
    {
        cout<<"0"<<endl;
    }
    
    else
     {
         isgreater=true; 

    sort(an,an+n);
    sort(am,am+m,greater<int>());
    for(int i=0;i<min(n,m);i++)
    {
        if(am[i]>an[i])
        {
            sumn+=am[i]-an[i];
            summ-=am[i]-an[i];
            swaps++;

        }
        if(sumn>summ)
        break;
    }
    if(sumn<=summ)
    {
        isgreater=false;
        cout<<"-1"<<endl;
    }

    
    }
    if(isgreater)
    cout<<swaps<<endl;


    
}
return 0;
}