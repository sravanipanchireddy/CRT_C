#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int balance=1000;
int main(){
	int ch;
	printf("Choices are:\n1.Check balance \n2.Deposite money \n3.with draw money\n4.Exit");
	do
	{
	printf("\npress the key:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		  printf("%d",balance);
		  break;
		case 2:
		   int deposite;
	       printf("\nenter the deposited money: ");
	       scanf("%d",&deposite);
	       balance=balance+deposite;
	       printf("\nDeposited successfully!!!");	
		   break;
		case 3:
		   int withdraw;
           printf("\nenter the withdraw money: ");
	       scanf("%d",&withdraw);
	       if(balance>0 and balance>withdraw)
		   {
	           balance=balance-withdraw;
	           printf("\nmoney withdraw successfully!!!");
	      }
	      else{
	      	printf("\nInsufficient balance");
		  }
		  break;
		case 4:
			printf("exit");
			break;
		default:
			printf("wrong key pressed");
	     }
   }while(ch<5);
	
}
