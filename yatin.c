#include<stdio.h>
int main()
{
int x,divide,multiply,multiply1,multiply2;
scanf("%d",&x);
divide=x>>5;
multiply=x<<5;
multiply1=(x<<5)+x;
multiply2=(x<<5)-x;
printf("%d\n %d\n %d\n %d\n",divide,multiply,multiply1,multiply2);

return 0;
}
