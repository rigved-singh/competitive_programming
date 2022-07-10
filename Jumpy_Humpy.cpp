#include<bits/stdc++.h>
#define int  long long
using namespace std;
 main()
{
    int n;
    cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++)
   {
       int x;
        cin>>x;
        v.push_back(x);
       
   }
 
vector<int> b;
for(int i=0;i<n;i++)
{
    b.push_back(v[i]);
}

for(int i=n-1;i>=0;i--)
{
    for(int j=i+1;j<n;j++)
    {
        if(b[j]>v[i])
        {
            v[i]^=v[j];
            break;
        }
    }
}

int mx=INT_MIN;
for(int i=0 ;i<n;i++)
mx=max(mx,v[i]);

cout<<mx;
// return 0;
}