#include<iostream>
using namespace std;

int main()
{
    char ch[100];
    int n;
    cin>>n;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }

    for(int i=0;i<n;i++)
    {
        if(ch[i]!=ch[n-i-1])
        {
            cout<<"Not a palindrome"<<endl;
            break;
        }
        else
        flag=true;

    }
    if(flag==true)
    {
        cout<<"Palindrome"<<endl;
    }
return 0;
}