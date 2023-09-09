#include<stdio.h>
 int factorial(a) int a;
 {
 	if(a==0)
 	return 1;
 	else return(a*factorial(a-1));
 }
 int isprime(int a){
 		int i;
 	for(i=2;i<a;i++)
 	if(a%i==0)
 	return(0);
 	return(1);
 }
 int isamongs(int a){
 	int n=a,sum=0,deno;
 	while(a!=0){
 		deno=n%10;
 		sum=sum+deno*deno*deno;
 		n/=10;
 		
	 }
	 if(sum==a)
	 return (1);
	 else
	 return (0);
 }
 
 int main(){
 	int i, a,f,p,m;
 	printf("enter a number");
 	scanf("%d",&a);
 	f=factorial( a);
 	printf("%d\n",f);
 	if (isprime(a)) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }
 	if(isamongs(a)){
 	 printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }	
	
	 
 


 }
