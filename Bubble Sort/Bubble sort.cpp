#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int A[],int n)
{

    int temp;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {

            if(A[j]>A[j+1])
            {

                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

}


int main()
{

    int arr[]= {2,1,3,9,4,7,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);

    for(int i=0; i<n; i++)
    {

        cout<<arr[i]<<' ';
    }

}
