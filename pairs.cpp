#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    pair<int,char> p;
    p.first=10;
    p.second='b';
    cout<<p.first<<p.second<<endl;

    int a,b;
    cin>>a>>b;

    pair<int,int> p2= make_pair(a,b);
return 0;
}