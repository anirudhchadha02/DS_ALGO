#include<iostream>
#include<algorithm>
using namespace std;
void binarySearch(int arr[],int n,int key)
{
    int s=0,e=n-1;
int m=0;
while(s<=e)
{
    m=(s+e)/2;
    if(arr[m]<key)
    {
        s=m+1;
    }
    if(arr[m]>key)
    e=m-1;
    if(arr[m]==key)
    {
        cout<<m<<endl;
        break;
    }
}
}
int main()
{
int arr[]={10,20,30,40,50,60,70};
int n=sizeof(arr)/sizeof(int);
int key=40;
// bool present=binary_search(arr,arr+n,key);
// int lb=lower_bound(arr,arr+n,key)-arr;
// cout<<lb<<endl;
binarySearch(arr,n,key);



return 0;
}