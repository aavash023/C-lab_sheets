#include<stdio.h>
#include<conio.h>
int main(){
	int a,num,sum;
	printf("enter the 5 digit number:");//12345=1+2+3+4+5=25
	scanf("%d",&num);
	while(num>0){
		a=num%10;
		sum=sum+a;
		num=num/10;
	}
	printf("\n the sum is %d",sum);
return(0);
}
