#include<iostream>
#include<cstring>
using namespace std;

template<typename T>
int find(T arr[],int n, T key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
            break;
        }
    }
    return n;
}

int main()
{
char arr[]={'a','b','c','d','e','f','g','h'};
int n=sizeof(arr)/sizeof(int);
char key='c';
cout<<find(arr,n,key)<<endl; 
return 0;

}