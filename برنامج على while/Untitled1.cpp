#include<stdio.h>
int main(){
int x;
int sum;
x =100;
while(x<=200){
if(x%9==0){
printf("\t%d",x);}
sum+=x;
x++;
}
printf("\t sum = %d \t",sum);
	
}
