#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,10,11,110,125};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;
    int* it= find(arr,arr+n,key);
    int index= it-arr;
    if(index==n)
    {
        cout<<"key not present"<<endl;
    }
    else
    {
        cout<<"key present at "<<index<<endl;
    }


return 0;
}