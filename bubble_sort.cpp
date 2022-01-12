#include<iostream>
using namespace std;


void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
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
}
bubble_sort(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}


return 0;
}




