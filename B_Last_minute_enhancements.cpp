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
lli t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    int v[100001];
    si s;
    for(lli i=0;i<n;i++)
        cin>>v[i];
    v[n-1]+=1;
    int count=1;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]+1!=v[i+1]&&v[i]!=v[i+1])
        v[i]++;
     
    }

    for(int i=0;i<n;i++)
    s.insert(v[i]);


    cout<<s.size()<<endl;
}
return 0;
}