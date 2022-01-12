#include<iostream>
#include<vector>
#include<stack>
#include<cstring>

bool is_valid(char s[])
{
    int n=sizeof(s)/sizeof(char);
    stack<char> stk;
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        if(ch=='(')
        {
            stk.push(ch);
        }
        else if(ch==')')
        {
            if(stk.empty() or stk.top()!='(')
            return false;
        
        stk.pop();
        }
    }
    return stk.empty();

}
using namespace std;

int main()
{
    char s[100]="a+(c+d)-(e+f)";
    if(is_valid(s))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
return 0;
}