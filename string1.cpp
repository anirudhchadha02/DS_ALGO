#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s0("Hello");
    string s1;
    string s2="Hello";
    char a[]={'a' , 'b' , 'c','\0'};
    string s3(a);
    string s4(s2);
    string s5=s3;
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    //Append
    s0.append(" world");
    cout<<s0<<endl;
    s1+="How are you";
    //Remove
    cout<<s1<<endl;
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;
    //Compare
    s0="Apple";
    s1="Mango";
    cout<<s0.compare(s1)<<endl; //Return integer =0,>0,<0

//OVerloading
 if(s1>s2)
 {
     cout<<"1 is greater than 2"<<endl;
 }

cout<< s0[1]<<endl;

//Find substrings
string s= "I love apple juice";
int idx=s.find("apple");
cout<<idx<<endl;

//remove a word
string word="apple";
int len= word.length();
cout<<s<<endl;
s.erase(idx,len);
cout<<s<<endl;

//Iterate
for(int i=0;i<s.length();i++)
{
    cout<<s[i]<<endl;
}


return 0;
}