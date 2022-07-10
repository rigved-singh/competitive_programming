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
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int res=0;
    int count=0;
    int sub(int x);
    while(n!=0)
    {
        res=sub(n);
        n=n-res;
        count++;
    }
    cout<<count<<endl;
}
return 0;
}
int sub(int x)
{ int ret=0;
    int arr[]={1,2,5,10,50,100};
    for(int i=0;i<6;i++)
    {
        if(x>=arr[i])
        ret=arr[i];
        else break;
    }
    return ret;
}