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
    int arr[10001];
    
string s;
    lli n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    arr[i]=0;
    
    
    for(int i=0;i<k;i++)
    {
        int count=0;
       cin>>s;
       if(s=="CLOSEALL")
       {
           for(int i=0;i<n;i++)
           arr[i]=0;
       }else {
           int x;
           cin>>x;
           if(arr[x-1]==0)
           arr[x-1]=1;
           else arr[x-1]=0;
       }
       for(int i=0;i<n;i++)
       if(arr[i]==1)
       count++;

       cout<<count<<endl;

    }






return 0;
}