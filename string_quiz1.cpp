#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;

    if(ch>='a'&& ch<='z')
    {
        cout<<"Lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"UPPERCASE"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }

return 0;
}   