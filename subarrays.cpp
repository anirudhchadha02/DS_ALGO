#include<iostream>
using namespace std;

int main()
{
      int n;
    cout<<"Enter number of elements"<<endl;
cin>>n;
int a[n];
int key;
int maxsum=0;
int cursum=0;
int csum[1000]={0};

for(int i=0;i<n;i++)
{
    cout<<i+1<<")";
    cin>>a[i];
    csum[i]=csum[i-1]+a[i];
}
for(int i=0;i<n;i++)
{
    
    for(int j=i;j<n;j++)
    {
        cursum=0;
        cursum=csum[j]-csum[i-1];
    }
    if(cursum>maxsum)
    {
        maxsum=cursum;
    }
}
cout<<"The max sum is "<<maxsum<<endl;



return 0;
}