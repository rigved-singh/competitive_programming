#include <bits/stdc++.h>
#define MOD 1000000007
#define lli long long int
#define ll long long
#define vi vector<int>
#define vlli vector<long long int>
#define pb push_back
#define pii pair<int, int>
#define si set<int>
#define sll set<long long>
#define cc                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    cc
        lli n;
    cin >> n;
    n++;
    lli arr[n] = {0};
    for (lli i = 1; i <n; i++)
        cin >> arr[i];
    int b = 0, e = 0;
    for (lli i = 1; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            b = i;
            while ( arr[i] >= arr[i + 1] && i<n-1)
            {
                i++;
            }
            e = i;
            break;
        }
    }
    if(b!=0&&e!=0)
    {
    lli arr1[e - b + 1];
    for (lli i = e; i >= b; i--)
        arr1[abs(i - e)] = arr[i];
    for (lli i = b; i <= e; i++)
    {
        arr[i] = arr1[i - b];
    }
    }
int flag=0;

for(lli i=1;i<n-1;i++)
{
    if(arr[i]>arr[i+1]){
flag=1;
    break;
    } 
}
if(flag) cout<<"no"<<endl;
else {
    cout<<"yes"<<endl;
    if(b==0&&e==0 )
    {
        b=1;e=1;
    }
    if(e==0&&b!=0) e=n;
    cout<<b<<" "<<e<<endl;
}
    return 0;
}