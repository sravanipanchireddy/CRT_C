//#include<stdio.h>
//#include<conio.h>
//int main(){
//	int n,ch;
//	scanf("%d",&n);
//	printf("\nEnter your choice press 1 to check marks:");
//	scanf("%d",&ch);
//	switch(ch){
//		case 1:
//			if (n<=100){
//				if(n>=90 and n<=100){
//					printf("A");
//				}
//				else if(n>=80 and n<=89){
//					printf("B");
//				}
//				else if(n>=70 and n<=79){
//					printf("C");
//				}
//				else if(n>=60 and n<=69){
//					printf("D");
//				}
//				else if(n<60){
//					printf("E");
//				}
//			}
//		   break;
//		default:printf("pressed key is wrong");
//	}
//}
#include <stdio.h>
int main() {
    int a;
    printf("Enter marks: ");
    scanf("%d", &a);

    switch (a / 10) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}

