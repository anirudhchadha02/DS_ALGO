#include<iostream>
using namespace std;
int first_occ(int arr[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }
    if(arr[0]==key)
    {
        return 0;
    }
    int i= first_occ(arr+1,n-1,key);
    if(i==-1)
    {
        return -1;
    }
    return i+1;
}

int linear_search(int arr[],int i, int n, int key)
{
    if(n==i)
    {
        return -1;
    }
    if(arr[i]==key)
    return i;

    return linear_search(arr,i+1,n,key);

}
int last_occ(int arr[],int i, int n, int key)
{
    if(i==0)
    return -1;

    if(arr[i]==key)
    {
        return i;
    }
    return last_occ(arr,i-1,n,key);
}
void all_occ(int arr[], int i , int n, int key)
{
    if(n==i)
    return;
    if(arr[i]==key)
    cout<<i<<endl;
    all_occ(arr,i+1,n,key);

}
int store_occ(int arr[], int i, int n, int key, int a2[],int k)
{
    
    if(n==i)
    return k;
    if(arr[i]==key)
    {
        a2[k]=i;
        return store_occ(arr,i+1,n,key,a2,k+1);
    }
    return store_occ(arr,i+1,n,key,a2,k);
}

int main()
{
    int arr[]={1,2,3,7,6,8,9,7};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    int a2[100]={0};
    cout<<first_occ(arr,n,key)<<endl;
    cout<<linear_search(arr,0,n,key)<<endl;
    cout<<last_occ(arr,n,n,key)<<endl;
    all_occ(arr,0,n,7);
    int n2=store_occ(arr,0,n,key,a2,0);
   for( int k=0;k<n2;k++)
   {
       cout<<a2[k]<<",";
   }


return 0;
}