#include<stdio.h>
#include<conio.h>
int main()
{
int m1,m2,m3;
int sum=0;
float avg;
sum = m1+m2+m3;
avg = sum/3;
printf("enter three mark");
scanf("%d%d%d",&m1,&m2,&m3);
if (avg >= 90 && avg <100){
printf("excellent");}
else if (avg >=80 && avg <90)
printf("very good");
else if (avg >=70 && avg <80)
printf("good");
else if (avg >=60 && avg <70)
printf("accept");
else printf("faild");
printf("\n%f",avg);
getch ();
return 0 ;
}














