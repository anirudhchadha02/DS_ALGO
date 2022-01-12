#include<iostream>
#include<vector>

using namespace std;

template <typename t>

class stack
{
    vector<t> v;
    public:
    void push(t data)
    {
        v.push_back(data);
    }
    bool empty()
    {
        return v.size()==0;
    }
    void pop()
    {
        if(!empty())
        {
            v.pop_back();
        }
    }
    t top()
    {
        return v[v.size()-1];
    }

};
void transfer(stack<int> &s1, stack<int> &s2,int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}

int main()
{
    stack<int> s;
    for(int i=0;i<5;i++)
    {
        s.push(i*i);
    }
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
