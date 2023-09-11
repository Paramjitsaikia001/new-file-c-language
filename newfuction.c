#include<stdio.h>
 oddoreven(int a){
		if(a%2==0)
		return 1;
		else 
		return 0;
	}
int revrse(int a){
	int sum=0;
	while(a!=0){
		sum=sum*10+a%10;
		a/=10;
		
	}
	return sum;
}
	int main()
	{
		int y;
	 printf("enter y for check odd or even..");
	 scanf("%d",&y);
	 if(oddoreven(y)){
		printf("\n%d is even\n",y);
	 }
	 else
	 {
		printf("\n%d is odd\n",y);
	 }

int z;
printf("enter z to reverse...");
scanf("%d",&z);

printf("\n%dis the reverse of %d\n ",revrse(z),z);
return 0;
	}