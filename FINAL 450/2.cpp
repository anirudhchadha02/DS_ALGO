#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int n;
cout<<"Enter n"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
int k;
cout<<"Enter k"<<endl;
cin>>k;
// int min=1000;
// int count=0;
// int i=0;
// for(int i=0;i<n;i++)
// {
   
//     if(arr[i]<min)
//     {
//         min=arr[i];
//         count++;
//     }
//      if(count==k)
//     {
//         cout<<"The "<<k<<"rd/th smallest element is "<<min<<endl;;
//         break;
//     }
// }

cout<<arr[k-1]<<endl;

return 0;
}