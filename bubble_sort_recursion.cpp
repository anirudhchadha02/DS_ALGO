#include<iostream>
using namespace std;

void bubble_sort_recursion(int arr[], int j, int n)
{
    if(n==1)
    {
        return;
    }
    if(j==n-1)
    {
        return bubble_sort_recursion(arr,0,n-1);
    }
    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
    }
    bubble_sort_recursion(arr,j+1,n);
    return;
  
}

int main()
{
    int arr[]={4,5,3,2,9};
    int n=sizeof(arr)/sizeof(int);
    bubble_sort_recursion(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    

return 0;
}