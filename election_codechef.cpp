#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(a>=51)
        cout<<"A"<<endl;
        else if(b>=51)
        cout<<"B"<<endl;
        else if(c>=51)
        cout<<"C"<<endl;
        else
        cout<<"NOTA"<<endl;

    }

return 0;
}