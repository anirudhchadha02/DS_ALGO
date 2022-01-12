#include<iostream>
using namespace std;

void increment(int *aptr)
{
    *aptr+=1;
    cout<<*aptr<<endl;
}

int main()
{
    int a=10;
    increment(&a);
    cout<<a<<endl;

return 0;
}