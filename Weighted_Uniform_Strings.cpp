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
int count=0;
string s;
cin>>s;
lli n;
cin>>n;
int arr[10000];
int arr1[100000];

for(int i=0;i<1000;i++)
{
    arr[i]=0;
    arr1[i]=0;
}

for(int i=0;i<n;i++)
cin>>arr[i];

arr1[0]=s[0]-96;
for(int i=1;i<s.length();i++)
{
    if(s[i]!=s[i-1])
    { 
        arr1[i]=s[i]-96;
        count=0;
    }
    else { 
         count+=s[i]-96;
        arr1[i]=s[i]-96+count;
   
    }

}
for(int i=0;i<n;i++)
{
    bool a=true;
    for(int j=0;j<s.length();j++)
    {
            if(arr[i]==arr1[j])
           { cout<<"Yes"<<endl;
           a=false;
           break;
           }
    }
    if(a) cout<<"No"<<endl;
    
}

return 0;
}