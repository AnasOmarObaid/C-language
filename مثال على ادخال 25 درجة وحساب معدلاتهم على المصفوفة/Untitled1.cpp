#include<stdio.h>
#include<conio.h>
int main()
{
int i;
float sum=0;
float avg=0 ;
float marks[];
for (i=0;i<4;i++){
printf (" enter marks ");
scanf("%f",&marks[i]);
sum+=marks[i];
avg=marks[i]/4;
}
printf(" \n avg = %f ", avg);
return 0 ;
getch() ;
}
