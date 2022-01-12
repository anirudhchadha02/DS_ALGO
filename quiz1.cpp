#include<iostream>
using namespace std;

int main()
{
int a[100];
int max=0;
int n;
cout<<"Enter n"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    if(a[i]>max)
    {
        max=a[i];
    }
}
cout<<"Max number is "<<max<<endl;

return 0;
}