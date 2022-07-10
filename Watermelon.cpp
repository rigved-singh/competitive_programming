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
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int,int>
#define si set<int>
#define sll set<long long>
using namespace std;
int main()
{int t,n;
int ar[100];
cin>>t;
while(t--)
{ flag:
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    
    }
    if(n==0)
    cout<<"YES";
    else
    {
        if(n==1&&ar[0]<0)
       { cout<<"NO"<<endl;
        goto flag;
       }
        else
        { for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            if(ar[i]>0&&ar[i]%(i+1)==0)
            ar[i]=0;
            
            sum+=ar[i];
        }
        if(sum==0)
        cout<<"YES"<<endl;
        else cout<<"NO";
        }
    }
}

return 0;
}