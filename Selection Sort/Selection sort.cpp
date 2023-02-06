#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[],int n)
{

    int i,j,index_min,temp;
    for(i=0; i<n-1; i++)
    {
        index_min=i;
        for(j=i+1; j<n; j++)
        {
            if(A[index_min]>A[j])
            {
                index_min=j;
            }
        }
        if(index_min!=i)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }


}


int main()
{
    int arr[]= {2,1,3,9,4,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);

    for(int i=0; i<n; i++)
    {

        cout<<arr[i]<<' ';
    }


}
