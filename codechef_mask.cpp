#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
int n,a;
for(int i=0;i<t;i++)
{
    cin>>n>>a;
    if((n-a)>a)
    {
        cout<<a<<endl;
    }
    else
    cout<<n-a<<endl;

}
return 0;
}