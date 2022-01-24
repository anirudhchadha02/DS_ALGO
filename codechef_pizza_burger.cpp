#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
int money,pizza,burger;
for(int i=0;i<t;i++)
{
    cin>>money>>pizza>>burger;
    if(money>= pizza)
    cout<<"PIZZA"<<endl;
    else if(money>=burger)
    cout<<"BURGER"<<endl;
    else
    cout<<"NOTHING"<<endl;


}
return 0;
}