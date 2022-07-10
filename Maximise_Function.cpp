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
    long  n;
    cin>>n;
    lli coolarr[100001];
    for(lli i=0;i<n;i++)
    cin>>coolarr[i];
    sort(coolarr,coolarr+n);
    lli bkchodi=abs(coolarr[0]-coolarr[1])+abs(coolarr[1]-coolarr[n-1])+abs(coolarr[n-1]-coolarr[0]);
    cout<<bkchodi<<endl;
}
return 0;
}