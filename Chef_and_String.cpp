#include<iostream>
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
string s;
cin>>s;
int c=0,h=0,e=0,f=0,ch=0,che=0,chef=0;
for(int i=0;i<s.length();i++)
{
     if(s[i]=='C')
     c++; 
     if(s[i]=='H')
     h++;
       if(s[i]=='E')
     e++; 
     if(s[i]=='F')
     f++;
     if(che>=1&&f>=1)
     {
     chef++;
        
        
          che--;
     }
      if(ch>=1&&e>=1)
     {
          che++;
          ch--;
     }

     if(c==1&&h==1)
     {
          ch++;
          c--;
          h--;
     }
    
     
}
cout<<chef<<endl;

return 0;
}