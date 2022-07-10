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
class abc
{
    int number ;
    static int count;
    public:
    void showcount()
    {
        cout<<"The value of count is \n"<<count<<endl;

    }
    void getcount(int a)
    {
        number-a ;
        count++;
    }
};
int abc:: count;

int main()
{
abc a,b,c;
a.showcount();
b.showcount();
c.showcount();
a.getcount(100);
b.getcount(200);
c.getcount(300);
a.showcount();
b.showcount();
c.showcount();

return 0;

}