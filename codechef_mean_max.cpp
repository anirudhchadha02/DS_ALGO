#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
double mean(int arr[], int e,int p)
{
    double sum=0;
    for(int i=e;i<=p;i++)
    {
        sum=sum+arr[i];
    }
    return (double)sum/(p-e+1);
}

bool compare(int a, int b)
{
    return a>b;
}


int main()
{
int t;
cin>>t;
int arr[1000];
int n;
for(int i=0;i<t;i++)
{
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    sort(arr,arr+n,compare);
    double max=0;
    double csum=0;

    for(int j=0;j<n;j++)
    {
        csum=mean(arr,0,i)+mean(arr,i+1,n-1);
        if(csum>max)
        {
            max=csum;
        }
    }
std::cout << std::fixed << std::setprecision(6) << max<<endl;


}
return 0;
}