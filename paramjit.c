#include<stdio.h>
 int factorial(a) int a;
 {
 	if(a==0)
 	return 1;
 	else return(a*factorial(a-1));
 }
 int main(){
 	int a,f;
 	printf("enter a number");
 	scanf("%d",&a);
 	f=factorial( a);
 	printf("%d",f);
 }
