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
{ lli count1=0,count2=0;
    lli n,d;
    cin>>n>>d;
    lli arr[10001];
    for(lli i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=80&&arr[i]>=9)
        {
        count1++;
        }
        else if(arr[i]<=100&&arr[i]>=1){
            count2++;
        }
    }if(d>=1)
    {
     if(count1%d==0)
     count1=count1/d;
     else count1=(count1/d)+1;

     if(count2%d==0)
     count2=count2/d;
     else count2=(count2/d)+1;

    cout<<count1+count2<<endl;
    }

    
}
return 0;
}