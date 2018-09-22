#include<stdio.h>
int main()
{ 
char index_of_name;

printf("enter first char of student");

scanf("%c",&index_of_name);

switch (index_of_name) {

case'A': printf("his name ali kamel , 20 years ago , mared of mona"); break;

case's': printf("his name salem kamel , 18 years ago , mared of manal"); break;

case 'H': printf("his name hamza kamal , 17 years ago,mared of Hanan "); break;

default : printf("you not have saved in this enter first char of student ");

}
return 0 ;
}
