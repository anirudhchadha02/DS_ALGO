#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

class Car
{
    public:
    string name;
    int x,y;
    
    int dist()
    {
        return x*+y*y;
    }
   

};
bool compare(Car A, Car B)
{
    int da=A.dist();
    int db=B.dist();

    if(da==db)
    {
        return A.name.length()<B.name.length() ;
    }
    return da<db;
}

int main()
{
      int n;
    cin>>n;
   vector<Car> v;
    for(int i=0;i<n;i++)
    {
        
        int x,y;
        string name;
        Car temp;
        cin.ignore();
        cin>>temp.name;
        cin>>temp.x>>temp.y;
        
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);

    for(auto c:v)
    {
        cout<<"Car: "<<c.name<<c.x<<","<<c.y<<endl;
            }

return 0;
}