#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int digit( long int);
int main()
{
    int n;
    cin>>n;
    if(n==1) cout<<"1"<<endl;
    else
    if(n==0||n==2||n==3) cout<<"NO SOLUTION"<<endl;
    else if(n==4) cout<<"2 4 1 3"<<endl;
    else {
        if(n&1)
        {
        for(int i=n-1;i>=1;i-=2) cout<<i<<" ";
        for(int i=n;i>=1;i-=2) cout<<i<<" ";
        }
        else {
            for(int i=n;i>=1;i-=2) cout<<i<<" ";
            for(int i=n-1;i>=1;i-=2) cout<<i<<" ";
        }
    }
    
    
}