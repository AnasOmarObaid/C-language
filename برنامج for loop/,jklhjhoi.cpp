#include<stdio.h>

int main()
{
int x; 
int sum =0;
for (x=100; x<=200 ; x++){
if (x%9 == 0 ){
printf("\t %d \t",x);
sum+=x;
}


}
printf("sum=%d",sum);
}
