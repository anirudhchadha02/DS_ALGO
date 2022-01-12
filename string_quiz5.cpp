#include<iostream>
using namespace std;

int main()
{
    char ch[100];
    cin.getline(ch,100);
    cout<<ch[0];
    for(int i=1;ch[i]!='\0';i++)
    {
        cout<<ch[i]-ch[i-1]<<ch[i];
        

        
    }
return 0;
}