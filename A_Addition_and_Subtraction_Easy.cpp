#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    int a ,b;
    char ch ;
    cin>> a >> ch >> b;
    if(ch=='+') cout<< a+b;
    else cout<< a-b;
return 0;
}