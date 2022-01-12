#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin>>n;
    int i=1;
    int k = 0;
    for(i=1;i<=10;i++)
    {
       if(n%i==0)
       {
           k=i;
           
       }
    }

    cout<<k<<endl;
    return 0;
}