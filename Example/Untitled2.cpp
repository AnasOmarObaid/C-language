#include<stdio.h>
#include<conio.h>
int main(){
int m[8]={1,2,3,4,5,6,7,8};
int even[7];
int odd[7];
int d=0;
int i ;
int c=0;
for(i=0;i<8;++i){
printf("%d",m[i]);
}
for(i=0;i<8;++i){
if(m[i]%2==0){
even[d]=m[i];
++d;}
else if(m[i]%2!=0){ 
odd[c]=m[i];
++c;}
}
for(d=0;d<4;++d){
printf("%d",even[d]);}
printf("the even nummer is %d ");
for(c=0;c<4;++c){
printf("%d",odd[c]);}
printf("the odd nummer is %d ");
}




