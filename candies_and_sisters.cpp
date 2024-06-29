#include<stdio.h>
#include<conio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		if(n==1 || n==2){
			printf("%d",0);
		}
		else if(n%2==0){
			printf("%d",(n/2)-1);
		}
		else{
			printf("%d",n/2);
		}
	}
	return 0;
}
