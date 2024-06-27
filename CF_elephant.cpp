#include<stdio.h>
#include<conio.h>
int main(){
	int x;
	scanf("%d",&x);
	int s,r;
	s=x/5;
	r=x%5;
	if (r>0 && r<5){
		s=s+1;
	}
	printf("%d",s);
	return 0;
	
}
