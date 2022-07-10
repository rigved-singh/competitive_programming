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
    bool ok=true;
    int n;
    cin>>n;
    int arr[1001];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int bal5=0,bal10=0,bal15=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
   bal5++;
    else if(arr[i]==10)
    {
        if(bal5==0)
        {
            ok=false;
        break;
        }
        else bal5--;
        bal10++;
    }
    else if(arr[i]==15)
    {
        if(bal10==0&&bal5<2)
        {
            ok=false;
            break;
        }
        else
        {
            if(bal10==0)
        bal5-=2;
        else bal10--;
        bal15++;  
            
        }
        
    }
}

if(ok)
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}