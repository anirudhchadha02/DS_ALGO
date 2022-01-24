#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int k;

for(int i=0;i<n;i++)
{
    cin>>k;
    int j=52%k;
    cout<<j<<endl;
}
return 0;
}