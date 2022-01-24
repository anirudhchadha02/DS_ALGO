#include<iostream>
#include<algorithm>
using namespace std;

void array_form(int a[], int k)
{
    int i=0;
    int sum=k;
    int b;
    while(b==(int)b)
    {
        int b=k-sum/2;
        a[i]=b;
        sum=sum+a[i];
        i++;
    }
    for(int v=0;v<i;k++)
    {
        cout<<a[v]<<endl;
    }
}

int main()
{
// int t;
// cin>>t;
// int k;
// int n;
int a[1000]={};
// for(int i=0;i<t;i++)
// {
//     cin>>k;
// }
int k=4;
array_form(a,k);
return 0;
}