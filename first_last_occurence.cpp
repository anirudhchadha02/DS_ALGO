#include<iostream>
using namespace std;
int first_occurence(int arr[], int n, int k)
{
     int s=0;
    int e=n-1;
    int ans=-1;

    while(s<=e)
    {
    int m=(s+e)/2;
    if(arr[m]==k)
    {
        ans=m;
        e=m-1;
    }
    else if (arr[m]>k)
    {
        e=m-1;
    }
    else
    s=m+1;
}
return ans;
}

int main()
{
    int arr[]={1,2,3,4,5,6,8,8,8,8,8,9,10,13,15,19};
    int n=sizeof(arr)/sizeof(int);
    cout<<first_occurence(arr,n,8)<<endl;
    

return 0;
}