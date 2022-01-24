#include <iostream>
#include<algorithm>
using namespace std;
class student
{
    public:
    int dsa,toc,dm;
    int total;
};

int main() {
	// your code goes here
	student t1,t2;
	int n;
	int dsa,toc,dm;
	cin>>n;
	for(int i=0;i<n;i++)
	{
        cin>>t1.dsa>>t1.toc>>t1.dm;
        cin>>t2.dsa>>t2.toc>>t2.dm;
        t1.total=t1.dsa+t1.toc+t1.dm;
        t2.total=t2.dsa+t2.toc+t2.dm;
        if(t1.total>t2.total)
        {
            cout<<"Dragon"<<endl;
        }
        else if(t2.total>t1.total)
        {
        cout<<"Sloth"<<endl;
        }
        else if(t1.total==t2.total)
        {
            if(t1.dsa>t2.dsa)
            {
                cout<<"Dragon"<<endl;
            }
            else if(t2.dsa>t1.dsa)
            {
                cout<<"Sloth"<<endl;
            }
            else
            {
                if(t1.toc>t2.toc){
                cout<<"Dragon"<<endl;
                }
                else if(t2.toc>t1.toc)
                {cout<<"Sloth"<<endl;}

                else
                    {
                        cout<<"Tied"<<endl;
                    }
            }
        }
	}


	return 0;
}
