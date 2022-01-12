#include<iostream>
using namespace std;

// void selection_sort(int arr[], int n)
// {
//     int min_idx;
//     for(int i=0;i<n-1;i++)
//     {
//         min_idx=i;
//         for(int j=i;j<n;j++)
//         {
//              if(arr[j]<arr[min_idx])
//         {
//             min_idx=j;
//         }

//         }
//         swap(arr[min_idx],arr[i]);
       
//     }
// }




void insertion_sort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
                
            }
            else
            break;
        }
        arr[j+1]=temp;
        
    }

}

void bubble_sort(int arr[], int n)
{

}
int main()
{
    int arr[]={1,5,8,9,34,2,57};
    int n=sizeof(arr)/sizeof(int);
    // selection_sort(arr,n);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

return 0;
}