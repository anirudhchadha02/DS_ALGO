#include<iostream>
using namespace std;
void prime_seive(int arr[])
{
    for( long long i=3;i<100000;i+=2)
    {
        arr[i]=1;
    }
    arr[2]=1;
    arr[1]=arr[0]=0;
    for(long long i=3;i<100000;i++)
    {
        if(arr[i]==1)
        {
            for(long long j=i*i;j<100000;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    
}
int main()
{
    int arr[100000]={0};
    prime_seive(arr);
    int csum[10000]={0};

    for(int i=0;i<100000;i++)
    {
        csum[i]=csum[i-1]+arr[i];
    }
    int q;
    cin>>q;
    
    while(q>0)
    {
        int a,b;
    cin>>a;
    cin>>b;
        cout<<csum[b]-csum[a]<<endl;
        q--;
    }


return 0;
}