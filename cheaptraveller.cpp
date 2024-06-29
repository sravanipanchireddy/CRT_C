#include<stdio.h>
main()
{
   int n,m,a,b,res,x;
   scanf("%d %d %d %d",&n,&m,&a,&b);
   if(a>(b/m))//compare the ticket price for single ride
   {
   	  x=n%m;
   	  res= b*(n/m);
   	  if(x!=0)
   	  {
   	  	if(b<(x*a))//if the remaining rides single ticket price is greater than card price then use card
    	{
   	  		res=res+b;
 	  		printf("%d",res);
    	}
    	else
	    {
			res=res+(x*a);
			printf("%d",res);
	    } 
   	  	
      }
      
      else//if the remaining rides single ticket price is less than card price then use card
	  {
        printf("%d",res);	
	  }
   	 
   }
   else
   {
   	 res=a*n;
   	 printf("%d",res);
   }
   
}
