#include<bits/stdc++.h>
using namespace std;

int binary_searc(int ar[],int n, int right, int left,int x)
{

    while(left<=right)
    {
        // if x equal to mid return the position
        int mid = left+(right-left)/2;

        if(ar[mid]==x)
            return mid;

        // If x greater, ignore left half
        if (ar[mid]<x)
            left=mid+1;

        // If x is smaller, ignore right half
        else
            right=mid-1;

    }


}



int main()
{

    int n,x;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cout<<"Number you want to search: ";
    cin>>x;
    sort(ar,ar+n);
    int right=n-1,left=0;
    cout<<binary_searc(ar,n,right,left,x)<<endl;





}
