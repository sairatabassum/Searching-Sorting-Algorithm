#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int ar[],int n)
{
    int i,j,item;
    for(i=1; i<n; i++)
    {
        item=ar[i];
        j=i-1;

        while(j>=0&&ar[j]>item)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=item;
    }




}

int main()
{



    int ar[6]= {3,4,1,3,6,9};
    int n=sizeof(ar)/sizeof(ar[0]);
    insertion_sort(ar,n);
    for(int i=0; i<n; i++)
    {
        cout<<ar[i]<<' ';
    }



}
