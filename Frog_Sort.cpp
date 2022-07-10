#include<bits/stdc++.h>
#define lli long long int


using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
lli t;
cin>>t;
while(t--)
{
    int l;
    cin>>l;
    int count=0;
    int coolweight[5]={0},cooljump[5]={0};
    for(int i=1;i<=l;i++)
    cin>>coolweight[i];
    for(int i=1;i<=l;i++)
    cin>>cooljump[i];
    int p[5]={0};

    for(int i=1;i<=l;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(coolweight[j]==i)
           { 
               p[i]=j;
            break;
           }
        }
    }
for(int j=2;j<=l;j++)
{   
    int k=0;
    for(int i=1;i<=l;i++)
    {
        if(coolweight[i]==j)
        {
            k=cooljump[i];
        }
    }
    if(p[j]<=p[j-1])
    {
        while(p[j]<=p[j-1])
            {
                p[j]+=k;
                count++;
            }
                }
}

    cout<<count<<endl;
}
return 0;
}