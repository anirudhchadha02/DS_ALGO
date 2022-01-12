#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if(present)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }

    int* it = lower_bound(arr,arr+n,key);
    int index=it-arr;
    if(!present)
    {
        cout<<"key absent"<<endl;
    }
    else 
    {
        cout<<"Key present at "<<index<<endl;  
    }



return 0;
}