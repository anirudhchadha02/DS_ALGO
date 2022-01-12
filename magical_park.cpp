#include<iostream>
using namespace std;

int main()
{
int m,n,s,k;
cout<<"Enter m,n,k,s"<<endl;
cin>>m;
cin>>n;
cin>>k;
cin>>s;
char a[m][n];
cout<<"Enter elements of array"<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
}

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s>=k)
            {
            if(a[i][j]=='.'){
            s=s-2;
            }
            if(a[i][j]=='*')
            {s=s+5;}
           if(a[i][j]=='#') 
            {break;}
            if (j<n-1) {
          s--;
        }
            }
        }

        }

if(s>=k)
{
    cout<<"yes"<<endl;
    cout<<s<<endl;
}
else
{
    cout<<"no"<<endl;
}

return 0;
}