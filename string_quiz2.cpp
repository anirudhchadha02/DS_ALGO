#include<iostream>
#include<cstring>
using namespace std;


int main()
{
char ch[100];
cin.getline(ch,100);
for(int i=0;i<strlen(ch);i++)
{
    if(ch[i]>='A' and ch[i]<='Z')
    {
        cout<<"\n";
    }
    cout<<ch[i];

}
}


// #include<iostream>
// using namespace std;
// int main(){
// string s;
// cin>>s;
// for(int i=0;i<s.size();i++){
// 	if(s[i]>='A' && s[i]<='Z')
// 	   cout<<"\n";

// 	   cout<<s[i];
// }


// }


