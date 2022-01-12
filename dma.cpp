#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int* a= new int[n];
cout<<sizeof(a)<<endl;

//No change
for(int i=0;i<n;i++)
{
    cin>>a[i];
    cout<<a[i]<<" ";
}

//Freeup space
delete[] a;

a= new int[500];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    
    cout<<a[i]<<endl;
}

return 0;
}