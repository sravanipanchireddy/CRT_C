#include<stdio.h>
#include<conio.h>
int main(){
	int w;
	scanf("%d",&w);
	if(w%2 != 0){
		printf("NO");
	}
	else{
		int x=w/2;
		if(x%2==0){
			printf("%d %d",x,x);
		}
		else{
			printf("%d %d",x-1,x+1);
		}
	}
	return 0;
}
