#include<iostream>
using namespace std;

int main()
{
int num,key;
cin>>num;
cin>>key;
int mask=1<<key;
int bit=(num&mask)>0?1:0;
cout<<bit<<endl;
return 0;
}