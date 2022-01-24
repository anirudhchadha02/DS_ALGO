#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
     int a[20];
    int n,cs=0,ms=0;
    cout<<"Enter n\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<")";
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);

    }
    cout<<"The max sum of subarray is "<<ms<<endl;
}