#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<fstream>
#include<math.h>
#include<ctype.h>
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
int arra[100000];
void arr(int n)
{
    for(int i=0;i<=n;i++)
    arra[i]=0;
}

int main()
{
cc
lli t;
cin>>t;
while(t--)
{ 
    void arr(int );

    lli q,n;
    cin>>n>>q;
    arr(n);
    
    while(q--)
    { 
        lli l,r;
        cin>>l>>r;
        int j=1;
        for(int i=l;i<=r;i++)
        { arra[i]+=j;
        j++;

        }
        
    }
    for(int i=1;i<=n;i++)
    cout<<arra[i]<<" ";
    cout<<endl;
    
    
}
return 0;
}