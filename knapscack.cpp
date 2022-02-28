#include<iostream>
using namespace std;

class abc
{
    public:
    int items[];
    int v;
    int w;
    float d;
    int n=
};

void input(abc items[])
{
    int n; 
    cout<<"enter the total number of items";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value of "<<i+1<<"th item "<<endl;
        cin>>items[i].v;
        cout<<"Enter the weight of "<<i+1<<"th item "<<endl;
        cin>>items[i].w;
    }
}

bool compare(abc i1, abc i2)
{
return i1.d>i2.d;
}

void knapsack(abc items[],int W)
{
    cout<<"Enter knapsack weight"<<endl;
    int n=sizeof(items)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        items[i].d=items[i].v/items[i].w;
    }
    sort(items,items+n,compare);

    int total_wt;
    int total_val;
    for(int i=0;i<n;i++)
    {
        if(total_wt+items[i].w<=W)
        {
            total_wt+=items[i].w;
            total_val+=items[i].v;
        }
        else
        {
            int wt=W-total_wt;
            total_val+=items[i].d*wt;
            total_wt+=wt;
            break;
        }

    }
    cout << "total weight in bag " << total_wt<<endl;
    cout<<"total value for "<<W<<" is "<<total_val<<endl;

}

int main()
{
    abc items[];
return 0;
}