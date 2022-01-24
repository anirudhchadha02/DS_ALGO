#include<iostream>
using namespace std;

int main()
{
// sorted array given 
// find pair of elements equal to k
int k;
cin>>k;
int arr[]={1,3,5,7,10,11,12,13};
int n=sizeof(arr)/sizeof(int);
int s=0;
int e=n-1;
while(s<e)
{
    if(arr[s]+arr[e]==k)
    {
        cout<<arr[s]<<" , "<<arr[e]<<endl;
        s++;
        e--;
    }
    else if(arr[s]+arr[e]>k)
    {
        e--;
    }
    else
    s++;
}

return 0;
}