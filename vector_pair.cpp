#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1, pair<int,int> p2)
{
    float d1=p1.first*p1.first + p1.second*p1.second;
    float d2= p2.first*p2.first + p2.second*p2.second;

    if(d1==d2)
    {
        return p1.first<p2.first;
    }
    return d1<d2;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);

    for(auto x:v)
    {
        cout<<"Car :"<<"("<<x.first<<","<<x.second<<")"<<endl;
            }
return 0;
}