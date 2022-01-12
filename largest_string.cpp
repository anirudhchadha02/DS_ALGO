#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000];
    char largest[1000];
    int n;
    int len=0;
    int large=0;
    cout<<"Enter number of strings"<<endl;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(a,1000);
        len= strlen(a);
        if(len>large)
        {
            large=len;
             strcpy(largest,a);
        }
       
    }
    cout<<largest<<endl;

return 0;
}