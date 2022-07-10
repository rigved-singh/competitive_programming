#include<iostream>
using namespace std;
class student
{
    public : 
    int a;

};
int main()
{
    int student::*ptr=&student::a;
    student rig;
    rig.a=1;
    cout<<"the value of a is "<<rig.a<<"\n";
    rig.*ptr=2;
    cout<<"the value in a with help of ptr "<<rig.*ptr<<endl;
    return 0;
}