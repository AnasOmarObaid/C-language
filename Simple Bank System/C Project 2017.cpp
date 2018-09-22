// Engineer Anas Omar Obaid
<<<<<<< HEAD
// Engineer At AlAzher
=======
// Engineer //
>>>>>>> 2e88afdf3f7f091fcee48448b0d15d93365998bc
#include<stdio.h>     
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct Account{
char Acc_Name[30];
int Acc_Number,Balance;

};


int size=0;


void create(struct Account ac[]);
void find(struct Account ac[]);
void dele(struct Account ac[]);
void sort(struct Account ac[]);
void display(struct Account ac[]);
void deposit(struct Account ac[]);
void withdraw(struct Account ac[]);
void transfer(struct Account ac[]);

  int main(){
  int i;
  struct Account ac[20];
    char pass[50];
    int p=0;
    char ch;

    printf("\n\n\n\n\n\n\n\t\t\t\t\tEnter Passowrd:");
    do{
        ch=getch();
       if(ch=='\r'){
            pass[p]='\0';
            break;
        }else{
            pass[p]=ch;
            printf("*");
            p++;
    }
    }while(1);
    
      if(strcmp(pass,"1111")==0){
        
   do{
        system("CLS");
        printf("\n\t\t==============================================================================\n\n");
                      printf("\t\t\t\t\t\t\tMENU\n");
          printf("\n\t\t==============================================================================\n\n"); 
  printf("\n\n\t\t 1. Create A New Account");
  printf("\n\n\t\t 2. Find Any Customer by Using Customer Name");
  printf("\n\n\t\t 3. Delete Any Customer by Using Account Number");
  printf("\n\n\t\t 4. Sort All Information");
  printf("\n\n\t\t 5. Display Information For All Account");
  printf("\n\n\t\t 6. Deposit the balance");
  printf("\n\n\t\t 7. Withdraw the balance");
  printf("\n\n\t\t 8. Transfer balance to another account");
  printf("\n\n\t\t 9. exit");
  printf("\n\n\n\tEnter your choice from [1 to 9] : ");
  scanf("%d",&i);
  switch(i){
  case 1:create(ac);break;
  case 2:find(ac);break;
  case 3:dele(ac);break;
  case 4:sort(ac);break;
  case 5:display(ac);break;
  case 6:deposit(ac);break;
  case 7:withdraw(ac);break;
  case 8:transfer(ac);break;
  case 9:return 0; 
  }
  }while(1);
   return 0;
   }else{ 
            system("CLS");
        printf("\n\n\n\n\n\n\n\t\t\t\t\tError input");
    }
    getch();  
}
   
   
void create(struct Account ac[]){ 
    char s;
    int i;
    system("CLS");
    char pass[50];
    int p=0;
    char ch;

    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tEnter Passowrd:");
    do{
        ch=getch();
       if(ch=='\r'){
            pass[p]='\0';
            break;
        }else{
            pass[p]=ch;
            printf("*");
            p++;
    }
    }while(1);
    
      if(strcmp(pass,"EIT")==0){
            
   fflush(stdin);         
do{    
    system("CLS");
    printf("\n\t\t\t********* Create Account **********\n\n");
printf("\n Enter Account Number : ");
scanf("%d",&ac[size].Acc_Number);
printf("\n Enter Name : ");
scanf("%s",&ac[size].Acc_Name);
printf("\n Enter Balance : ");
scanf("%d",&ac[size].Balance);
      ++size;
 
    
printf("\nDo you want to Add more ?[yes/no]:"); 
scanf("%s",&s);
printf("\n\n\t\t\t<<<<<< Create Account process successfully>>>>>>>\n\n\n");     
getch();
  }while(s=='Y'||s=='y');
  }else{ 
            system("CLS");
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\tError input");
    }
    getch();  
}

//************************************* Delete  *********************************//
void dele(struct Account ac[]){ 
 int a,flag=0,i;
  system("CLS");
  printf("\n\t\t\t********* Delete Coustmer **********\n\n");
printf("\n Enter The Account 'Number' you want to Delete : ");
scanf("%d",&a);
for(i=0;i<20;i++){
if(a==ac[i].Acc_Number)
  size--;
  flag=1;
   break; 
  }
ac[i].Acc_Number=ac[i+1].Acc_Number;
strcpy(ac[i].Acc_Name , ac[i+1].Acc_Name);
ac[i].Balance=ac[i+1].Balance;

if(flag==1){
    printf("\n\n\t\t\t<<<<<< Deleting is Done >>>>>>>\n\n");}
else
printf("\n\n\t\t\t<<<<<< Not found number to Delete >>>>>>>\n\n");
 getch();
}

//************************************ Find ******************************************//
void find(struct Account ac[]){
    int i;
    char a[8];   
    system("CLS");
    printf("\n\t\t\t\t********* Find Coustmer **********\n\n");
printf("\n Entre Coustmer Name : ");
scanf("%s",a);
for( i=0;i<20;++i){
if(strcmp(ac[i].Acc_Name,(a))==0){
    break;
    }
}
printf("\n\t\tAccount Number\t\tName\t\tBalance");
 printf("\n\t\t________________________________________________________________________\n");
 printf("\n\t\t\t%d\t\t%s\t\t%d ",ac[i].Acc_Number,ac[i].Acc_Name,ac[i].Balance); 
 printf("\n\t\t________________________________________________________________________\n"); 
 getch();                   
 }
 
 //******************************* Sort  ******************************************//
 void sort(struct Account ac[]){
    int i,a,temp,temp2;
  for( i=0;i<size-1;++i)
  for( a=i+1;a<size;++a)
  if(ac[i].Balance>=ac[a].Balance){
   temp=ac[i].Balance;
    ac[i].Balance=ac[a].Balance;
    ac[a].Balance=temp;
    temp2=ac[i].Acc_Number;
    ac[i].Acc_Number=ac[a].Acc_Number;
    ac[a].Acc_Number=temp2;
    }
     system("CLS");
     printf("\n\t\t\t\t********* Sort Information **********\n\n");
      printf("\n<<<<Sorting done>>>>>");
	   getch(); 
}

//***************************** Display  ********************************************************//

void display(struct Account ac[]){ 
       system("CLS");
       printf("\n\t\t\t\t********* Display Information **********\n\n");
 printf("\n\t\tAccount Number\t\tName\t\tBalance");
 printf("\n\t\t________________________________________________________________________\n");
 for(int i=0;i<size;++i){
 printf("\n\t\t\t%d\t\t%s\t\t%d ",ac[i].Acc_Number,ac[i].Acc_Name,ac[i].Balance); 
 printf("\n\t\t________________________________________________________________________\n"); 
  }
   getch();  
}

//***************************** Deposit  ********************************************************//
void deposit(struct Account ac[]){
     int i,a,des,flag=0;  
     char s;
     do{ 
	system("CLS");
    printf("\n\t\t\t\t********* Account Balance << Deposit Balance >> **********\n\n");
    
 printf("\n Enter Account Number : ");
 scanf("%d",&a);
 for( i=0;i<20;++i){
 if(a==ac[i].Acc_Number){
        flag=1;
    break;
    }
}
	printf ("\n\nYour Current Balance is: %d\n\n",ac[i].Balance);
	printf ("\n\n\n******** Deposit *********\n\n\n");
	printf ("Enter Amount to Deposit :");
	scanf ("%d",&des);
	ac[i].Balance=ac[i].Balance+des;
	printf ("\n\nAmount deposited: %d",des);
	printf ("\n\nNew Balance: %d\n\n",ac[i].Balance);
	if(flag!=1){
    printf("\n\n\t\t\t<<<<<< Not found Account >>>>>>>\n\n");}
	printf("\nDo you want to Deposit more ?[yes/no]:"); 
scanf("%s",&s);
getch();
  }while(s=='Y'||s=='y');

 getch();
 }

//***************************** Withdraw  ********************************************************//
void withdraw (struct Account ac[]){
     int i,a,withdraw,flag=0;  
     char s;
     do{ 
	system("CLS");
    printf("\n\t\t\t\t********* Account Balance << Withdraw Balance >> **********\n\n");
    
 printf("\n Enter Account Number : ");
 scanf("%d",&a);
 for( i=0;i<20;++i){
 if(a==ac[i].Acc_Number){
        flag=1;
    break;
    }
}
if (ac[i].Balance==0){
		printf ("\n\nplease be reminded that your current balance is: %d\n", ac[i].Balance);
	    printf ("\n\nYou don't have a bank balance to withdraw");
	    
	}else{
		printf ("\n\n\n******** Withdraw *********\n\n\n");
		printf ("Enter Amount :");
		scanf ("%d", &withdraw);
	}
	if (ac[i].Balance>=withdraw)
	{
		ac[i].Balance=ac[i].Balance-withdraw;
		printf ("\n\nAmount withdraw: %d",withdraw);
		printf ("\n\nNew Balance: %d\n\n", ac[i].Balance);
	}else{
		printf ("\n\n ******** Insufficient Balance *********\n");
    }
    printf("\nDo you want to Withdraw more ?[yes/no]:"); 
scanf("%s",&s);
getch();
  }while(s=='Y'||s=='y');
  
    if(flag!=1){
    printf("\n\n\t\t\t<<<<<< Not found Account >>>>>>>\n\n");}
    getch();
 }
	
//***************************** Transfer  ********************************************************//
void transfer (struct Account ac[]){
     int j,i,a,b,Tr,flag=0;  
     char s;
     do{ 
	system("CLS");
    printf("\n\t\t\t\t********* Transfer Balance **********\n\n");
 printf("\n Enter Account Number You Want To Transfer From It : ");
 scanf("%d",&a);
 for( i=0;i<20;++i){
 if(a==ac[i].Acc_Number){
        flag=1;
    break;
    }
}
	printf ("\n\nYour Current Balance is: %d\n\n",ac[i].Balance);
	printf ("\n\n\n******** Transfer *********\n\n\n");
	printf("\n Enter Account Number You Want To Transfer  : ");
 scanf("%d",&b);
 for( j=0;j<20;++j){
 if(b==ac[j].Acc_Number){
        flag=1;
    break;
    }
}
	printf ("\n\nEnter Amount to Transfer :");
	scanf ("%d",&Tr);
	ac[j].Balance=ac[j].Balance+Tr;
	ac[i].Balance=ac[i].Balance-Tr;
	printf ("\n\nAmount Transfered: %d",Tr);
	printf ("\n\nNew Balance For The account transferred: %d\n\n",ac[i].Balance);
	printf ("\n\nNew Balance For The account transferred for it: %d\n\n",ac[j].Balance);
	printf("\nDo you want to Deposit more ?[yes/no]:"); 
scanf("%s",&s);
getch();
  }while(s=='Y'||s=='y');

if(flag!=1){
    printf("\n\n\t\t\t<<<<<< Not found Account >>>>>>>\n\n");}
 getch();
 }
