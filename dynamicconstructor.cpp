#include<bits/stdc++.h>
#define MOD 1000000007
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
class integer
{
    int *x;
    int *y;
    public:
    integer()
    {

    } 
    integer(int *x1,int *y1)
    {
        x=new int;
        x=x1;
        y=new int;
        y=y1;
    }

};
int main()
{
cc
int *p;
cout<<"enter no"<<endl;
p=new int ;
cin>>*p;
cout<<"no is "<<*p;
delete p;
return 0;
}