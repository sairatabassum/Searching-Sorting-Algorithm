#include<bits/stdc++.h>
using namespace std;

int linear_search(int ar[],int n,int x)
{

    for(int i=0; i<n; i++)
    {
        if(ar[i]==x)
        {
            return i;
        }
    }
    return -1;

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
    cout<<linear_search(ar,n,x)<<endl;


}
