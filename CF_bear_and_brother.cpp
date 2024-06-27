#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,y=0;
	scanf("%d %d",&a,&b);
	while(a<b || a == b){
		a=a*3;
		b=b*2;
		y=y+1;
	}
	printf("%d",y);
	
}
