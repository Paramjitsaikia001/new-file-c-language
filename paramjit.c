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
		sum+=i;
	}
	if(sum==a)
	return(1);
	else
	return(0);
}
 
 int main(){
 	int  a,f,l;
 	printf("enter a to find factorial....");
 	scanf("%d",&a);
 	f=factorial( a);
 	printf("\n%d is the factorial of %d\n",f,a);

	//for prime number
	int p;
	printf("enter p for check it prime or not...");
	scanf("%d",&p);
 	if (isprime(p)) {
        printf("\n%d is a prime number.\n", p);
    } else {
        printf("\n%d is not a prime number.\n", p);
    }
	
	//for armstrongs number
	int m;
	printf("enter m for check armstrong or not..");
	scanf("%d",&m);
 	if(isamongs(m)){
 	 printf("\n%d is an Armstrong number.\n", m);
    } else {
        printf("\n%d is not an Armstrong number.\n", m);
    }

	//for largest of three number	
	int b,c;
	printf("enter two  number");
	scanf("%d\n%d",&b,&c);
     l=largest(largest(a,b),c);
	 printf("\n%d is the largest number",l);

	 //for perfect number
	 int x;
	 printf("\nenter x for check perfect  number or not..");
	 scanf("%d",&x);
	 if(perfect(x))
printf("\n%d is the perfect no\n",x);
else
printf("\n%d is not perfect no\n",x);

 


 }
