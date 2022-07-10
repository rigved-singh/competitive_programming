#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
    char ch[19];
    for(int i=0;i<19;i++)
    {
        cin>> ch[i];
        if(ch[i]==',') cout<< " ";
        else cout<< ch[i];
    }
return 0;
}