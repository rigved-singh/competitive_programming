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
#define max 100000001
int main()
{
cc
int t;
cin>>t;
while(t--)
{
    lli n;
    cin>>n;
    lli arr[max];
    for(lli i=0;i<n;i++)
    cin>>arr[i];
    lli i=0,j=n-1,count=0;
    for(i=0;i<j-1;i++)
    {
        while(i<j)
        {
            if(arr[i]%2==0&&arr[j]%2==1)
            count++;
            j--;
        }
    }
    cout<<count<<endl;
    
}
return 0;
}
