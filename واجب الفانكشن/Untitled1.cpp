#include<stdio.h>
#include<conio.h>
int div(int a,int b);
int main(){
int a,b,d;
printf("enter your number\t");
scanf("%d%d",&a,&b);
div(a,b);
printf("div = %d",div(a,b));
return 0 ;}
int div (int a , int b){
int d ;
a/b;
return(a/b);}

