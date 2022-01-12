#include <stdio.h>
#include<unistd.h>

 
int add(int x, int y)
 {
    int bin = (x & y) << 1;
    int rem = x^y;
 
    if (bin == 0)
        return rem;
 
    add(bin, rem);
}
int sub(int num1, int num2)
{
    if(num2==0)
        return num1;
    else
        return sub((num1-1),(num2-1));
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d", add(a, b));
    printf("%d",sub(a,b));

    return 0;
}
