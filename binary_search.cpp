#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==key)
        {
            return mid+1;
        }
        else if(a[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }

}

int main()
{
    int n;
    cout<<"Enter number of elements"<<endl;
cin>>n;
int a[n];
int key;

for(int i=0;i<n;i++)
{
    cout<<i+1<<")";
    cin>>a[i];
    cout<<endl;
}
cout<<"Enter number to be searched"<<endl;
cin>>key;
cout<<binary_search(a,n,key);




return 0;
}