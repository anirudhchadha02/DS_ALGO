#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int k;
cout<<"Enter k"<<endl;
cin>>k;
cin.get();
string ch;
cin>>ch;
cout<<ch<<endl;



int flag=0,count=0,j=0;
char maxchar;
for(int i=0;i<ch.length();i++)
{
    if(ch[i]=='a')
    {
        flag++;
    }
    else
    count++;

}
if(count>flag)
{
    maxchar='b';
}
else if(count<flag)
{
    maxchar='a';
}
else
maxchar='a';
    for(int i=0;i<ch.length()&&j!=k;i++)
    {
        if(ch[i]!=maxchar)
        {
            ch[i]=maxchar;
            j++;
        }
    }
// cout<<ch<<endl;
int i=0;
for(;i<ch.length();i++)
{
    if(ch[i]!=maxchar)
    {
        break;
    }
}
cout<<i<<endl;
return 0;
}