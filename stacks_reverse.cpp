#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// template <typename t>

// class stack
// {
//     vector<t> v;
//     public:
//     void push(t data)
//     {
//         v.push_back(data);
//     }
//     bool empty()
//     {
//         return v.size()==0;
//     }
//     void pop()
//     {
//         if(!empty())
//         {
//             v.pop_back();
//         }
//     }
//     t top()
//     {
//         return v[v.size()-1];
//     }

// };
void transfer(stack<int> &s1, stack<int> &s2,int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}

stack<int> reverse_print(stack<int> s)
{
    stack<int> s2;
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    return s2;
}

void reverse(stack<int> &s1)
{
    stack<int> s2;
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        int x=s1.top();
        s1.pop();

        // transfer n-1 elements from s1 to s2
        transfer(s1,s2,n-i-1);
        //insert element x in s1
        s1.push(x);
        // insert n-i-1 elements from s2 to s1
        transfer(s2,s1,n-i-1);
    }

}
void insertAtBottom(stack<int> &s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    // rec case
    int data=s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
void reverse_recursion(stack<int> &s)
{
    if(s.empty())
    return;
    // else
    // pop out the top element and insert at bottom of reversed smaller stack
    int x=s.top();
    s.pop();
    // rec reverse smaller stack
    reverse_recursion(s);
    insertAtBottom(s,x);

}
int main()
{
    stack<int> s;
    for(int i=0;i<5;i++)
    {
        s.push(i*i);
    }
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
  
    // stack<int> s2= reverse_print(s);
    // while(!s2.empty())
    // {
    //     cout<<s2.top()<<endl;
    //     s2.pop();
    // }

return 0;
}
