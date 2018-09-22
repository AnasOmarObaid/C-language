#include<stdio.h>
#include<conio.h>
int mult(int a,int b){
int x;
x=a*b;
return(x);
}
int div(int a,int b){
int y;
y=a/b;
return(y);
}
int sum(int a,int b){
int z;
z=a+b;
return(z);
}
int mod(int a,int b){
int n;
n=a%b;
return(n);
}
int ask(int a,int b){
int w;
w=a-b;
return(w);
}
int main(){
int a,b,x,y,z,n,w;
printf("Enter two number");
scanf("%d%d",&a,&b);
x=mult(a,b);
printf("%d",x);
y=div(a,b);
printf("%d",y);
z=sum(a,b);
printf("%d",z);
n=mod(a,b);
printf("%d",n);
w=ask(a,b);
printf("%d",w);
getch();
return 0;
}


