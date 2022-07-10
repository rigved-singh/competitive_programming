#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   long long int n,i;
   
cin>>n;
int a[100];
for(i=0;i<n-1;i++){
    cin>>a[i];
}
sort(a,a+n-1);
    for(i=1;i<=n-1;i++)
    {

        if(i==a[i-1]){
            
        }
        else
        cout<<i;
    }
    
    return 0;
}