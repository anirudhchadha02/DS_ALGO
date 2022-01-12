#include<iostream>
using namespace std;
//Explicit typecasting for char variables

int main()
{
// char ch='A';
// cout<<(void*)&ch<<endl;
 
int x=10;
int *xptr=&x;
cout<<xptr<<endl;
cout<<*(&x)<<endl;
cout<<*(&xptr)<<endl; 
cout<<&(*xptr)<<endl; 
cout<<*xptr+1<<endl;
cout<<*(xptr+1)<<endl;
int **xxptr=&xptr;
cout<<**xxptr; 
return 0;

}

