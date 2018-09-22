#include<stdio.h>
#include<conio.h>
int main(){
int a;
int h;
int x=30;
int y=36;
int cost;
do{
printf("\n enter your nummber [1,2]\t");
scanf("%d",&a);
if(a==1){
printf("\n student is regular ");
printf("\n enter Haors\t");
scanf("%d",&h);
cost=h*x;
printf("cost = %d$",cost);}
else if (a==2){
printf("\n student is non regular ");
printf("\n enter Haors\t");
scanf("%d",&h);
cost=h*y;
printf("\ncost = %d$",cost);}
else
printf("you must Enter anumber brywen [1 , 2 ]");
}while(a!=9);} 

