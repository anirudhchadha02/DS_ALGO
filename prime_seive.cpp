#include<iostream>
using namespace std;
void prime_seive(int *arr, int n)
{
    for( int i=3;i<n;i+=2)
    {
        arr[i]=1;
    }
    arr[2]=1;
    arr[1]=arr[0]=0;
    for(int i=3;i<n;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<n;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[100000]={0};
    prime_seive(arr,n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<endl;
        }

    }

return 0;
}