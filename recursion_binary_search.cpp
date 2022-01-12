#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int s, int e)
{
    int mid;
    if(s<=e)
    {
        int mid=(s+e)/2;
    
        
         if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            return binarySearch(arr,key,s,mid-1);
        }
       if(arr[mid<key])
        {
            return binarySearch(arr,key,mid+1,e);
        }
    }    
}
int main()
{
int arr[]={1,2,3,4,5,6,7};
int key;
cin>>key;
int n=sizeof(arr)/sizeof(int);
cout<<binarySearch(arr,key,0,n-1)<<endl;

}

