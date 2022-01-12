#include<iostream>
#include<cstring>
using namespace std;

void remove(char a[])
{
    int prev=0;
    int n=strlen(a);
    if(n==1 or n==0)
    {
        return;
    }
    
    for(int curr=0;curr<n;curr++)
    {
        if(a[curr]!=a[prev])
        {
            prev++;
            a[prev]=a[curr];
        }
    }
    a[prev+1]='\0';
    return;
}

int main()
{
    char ch[100];
    cin.getline(ch,100);
    remove(ch);
    cout<<ch<<endl;



}