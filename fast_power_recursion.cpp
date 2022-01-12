#include<iostream>
using namespace std;

// logic => a=a*(a^n/2)^2 if odd 
//         a=(a^n/2)^2 if even

int fast_power(int a, int n)
{
    if(n==0)
    {
        return 1;
    }
    int small_ans=fast_power(a,n/2);
    small_ans*=small_ans;
    if(n%2!=0)
    {
        return a*small_ans;
    }
    return small_ans;
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<fast_power(a,n);


return 0;
}