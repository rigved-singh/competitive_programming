#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
Bl_dem
string s;
cin>> s;
int st=-1;
int end=0;
for(int i=0;i<(int)s.size();i++)
{
    if(s[i]== 'A' and st==-1){
        st=i;
    }
    if(s[i]=='Z' ){
        end=i;
    }

}
cout<< end-st+1;
return 0;
}