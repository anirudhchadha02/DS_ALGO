#include<iostream>
using namespace std;
bool check(char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            return false;
            break;
        }
        else 
        continue;
    }
    return true;

}
int main()
{
    int n;
    cin>>n;
char s1[n];
cin>>s1;
bool x=check(s1,n);
if(x)
cout<<"true"<<endl;
else
cout<<"false"<<endl;
return 0;
}