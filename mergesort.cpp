#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define Bl_dem ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 int b[6];
void merge(int a[] , int l , int mid , int r)
{
    int i=l;
    int j=mid+1;
    int k=l ;
    while(i<=mid && j<=r)
    {
        if( a[i]>a[j] )
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else{
            b[k]=a[i];
            i++; k++;
        }
    }
    if(i>mid)
    {
        while(j<=r)
        {
            b[k]=a[j];
            j++; k++;
        }
    }
    else 
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(int i=l ;i<=r;i++)
    {
        a[i]=b[i];
    }


}
    void mergesort(int a[], int l , int r )
    {
        if(l<r)
        {
            int mid=l+r;
            mid/=2;
            mergesort(a,l,mid);
            mergesort(a,mid+1,r);
            merge(a,l, mid,r);
        }
    }
int main()
{
Bl_dem
    int a[]{7,4,3,8,9,1};
        mergesort(a,0,5);
            for(int i=0;i<6;i++) 
                cout<< a[i]<< '\n';
return 0;
}