#include<stdio.h>
#include<conio.h>
#include<ctype.h>
 main()
{
int no1,no2,i ;
char op,ch='y' ;
do{
printf("enter no1,op,no2:");
scanf("%d%c%d",&no1,&op,&no2);
switch(op){
case '+' : printf("%d%c%d=%d",no1,op,no2,no1+no2);getch();break;
case '/' :printf("%d%c%d=%d",no1,op,no2,no1/no2);getch();break ;
case '-' : printf("%d%c%d=%d",no1,op,no2,no1-no2);getch();break;
case '*' : printf("%d%c%d=%d",no1,op,no2,no1*no2);getch();break;
default:printf("\n!!!operator you must in[+,-,*,/]!!");
}
printf("\n you want insert new opreation[y/n]:");
scanf("\n%c",&ch);
}while ((ch)=='y');
}
