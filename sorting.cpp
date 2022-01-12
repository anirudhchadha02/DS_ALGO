#include<iostream>
using namespace std;
bool compare(int a, int b)
{
    return a<b;
}
int main()
{
      int n;
    cout<<"Enter number of elements"<<endl;
cin>>n;
int a[n];
int key;

for(int i=0;i<n;i++)
{
    cout<<i+1<<")";
    cin>>a[i];
}
sort(a,a+n,compare);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<endl;
}

return 0;
}