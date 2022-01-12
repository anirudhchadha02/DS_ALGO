#include<iostream>
using namespace std;

int find(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        return mid;
        
        else if(arr[s]<=arr[mid])
        {
            if(key>=arr[s] and key<=arr[mid])
            {
                e=mid-1;
            }
            else
            s=mid+1;

        }
        else
        {
        if(key>=mid and key<=e)
        {
            s=mid+1;
        }
        else
        e=mid-1;
        }

    }
}

int main()
{
int arr[]={4,5,1,2,3};
int n=sizeof(arr)/sizeof(int);
int key=3;
cout<<find(arr,n,key)<<endl;
return 0;
}