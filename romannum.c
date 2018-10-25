#include<stdio.h>
void main()
{
char r;
printf("enter roman num");
scanf("%c",&r);
switch(r)
{
case 'I':
printf("1");
break;
case 'V':
printf("5");
break;
case 'X':
printf("10");
break;
case 'L':
printf("50");
break;
case 'C':
printf("100");
break;
case 'D':
printf("500");
break;
case 'F':
printf("1000");
break;
default:
printf("no such roman");
}
}


