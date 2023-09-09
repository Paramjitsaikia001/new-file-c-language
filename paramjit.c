#include<stdio.h>
 int factorial(int a)
 {
 	// if(a==0)
 	// return 1;
 	// else 
	// return(a*factorial(a-1));
	int i,f=1;
	for(i=a;i<=a,i!=0;i--)
	f*=i;
	return(f);
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
 	while(n!=0){
 		deno=n%10;
 		sum=sum+deno*deno*deno;
 		n/=10;
 		
	 }
	 if(sum==a)
	 return (1);
	 else
	 return (0);
 }
 int largest(int x,int y)
 {
	if(x>y)
	return x;
	else
	return y;

 }
 int perfect(int a){
	int i,div,sum=0;
	for(i=1;i<=a/2;i++)
	{
		div=a%i;
		if(div==0)
		sum+=div;
	}
	if(sum==a)
	return(1);
	else
	return(0);
}
 
 int main(){
 	int i, a,f,p,m,l;
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
	int b,c;
	printf("enter two  number");
	scanf("%d\n%d",&b,&c);
     l=largest(largest(a,b),c);
	 printf("%d is the largest number",l);
	 if(perfect(a))
printf("%d is the perfect no");
else
printf("%d is not perfect no");

 


 }
