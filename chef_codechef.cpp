#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int N;
    int arr[1000];
    int x;

    for(int i=0;i<n;i++)
    {
        cin>>N>>x;
        for(int j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+N,greater<int>());
        int sum=arr[0];
        for(int k=1;k<N;k++)
        {
            if(sum>=x)
            {cout<<i+1<<endl;
            break;
            }
            sum=sum+arr[i];
            
        }
        if(sum<x)
        cout<<-1<<endl;


    }

return 0;
}