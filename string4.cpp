#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delim)
{
    static char *input=NULL;
    if(*str!=NULL)
    {
        input =str;
    }
    if(input==NULL)
    return NULL;
    char *output= new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];

        }
        else
        {
            output[i]='\0';
            input = input+i+1;
            return output;

        }
    }



}

int main()
{
    char s[100]={"Today is a rainy day"};
    char *ptr = strtok(s," ");
    cout<<ptr<<endl;

    while(ptr!=NULL)
    {
        char *ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }

return 0;
}