#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int a[], int n)
{
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;

            }
        }
        swap(a[min_index],a[i]);
        
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
selection_sort(a,n);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}


return 0;
}



// #include<iostream>
// using namespace std;

// int main()
// {
// int arr[]={5,3,9,6,4,2,1};
// int n=sizeof(arr)/sizeof(int);
// int min_idx;

// for(int i=0;i<n-1;i++)
// {
//     min_idx=i;

//     for(int j=i;j<n;j++)
//     {
        
//         if(arr[j]<arr[min_idx])
//         {
//             min_idx=j;

//         }
//     }
//     swap(arr[i],arr[min_idx]);
// }
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<endl;
// }

// return 0;
// }