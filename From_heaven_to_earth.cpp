#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    float n,v1,v2;
    cin>>n>>v1>>v2;

    float stime,etime;
    stime=(n*sqrt(2))/(v1);
    etime=(2*n)/v2;
    if(stime>etime)
    cout<<"Elevator"<<endl;
    else
    cout<<"Stairs"<<endl;
    }
    return 0;
}