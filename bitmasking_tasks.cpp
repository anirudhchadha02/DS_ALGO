#include<iostream>
using namespace std;

void isOdd(int n)
{
    if(n&1)
    {
        cout<<"Odd"<<endl;
    }
    else
    cout<<"even"<<endl;
}
int getBit(int n,int i)
{
    int mask=1<<i;
    int bit=(n&mask)>0?1:0;
    return bit;
}
int setBit(int n,int i)
{
    int mask=1<<i;
    int ans=n|mask;
    return ans;
}
int clearBit(int n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
    return n;
}
void updateBit(int n, int i, int v)
{
    int mask=~(1<<i);
    int cleared_n=n&mask;
    int n=cleared_n|v<<i;
}

int countBits(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}
int main()
{

return 0;
}