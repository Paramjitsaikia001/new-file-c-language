#include<stdio.h>
//to check odd or even
 oddoreven(int a){
		if(a%2==0)
		return 1;
		else 
		return 0;
	}

    //to find the reverse
int revrse(int a){
	int sum=0;
	while(a!=0){
		sum=sum*10+a%10;
		a/=10;
		
	}
	return sum;
}
void swap(int *a,int *b){
	int t;
	*a=*a ^ *b;
    *b=*a^*b;
	*a=*a^*b;
}
	int main()
	{

        //to check odd or even
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

 //to find the reverse
int z;
printf("enter z to reverse...");
scanf("%d",&z);

printf("\n%dis the reverse of %d\n ",revrse(z),z);
return 0;

// swap two number
	int a,b;
	printf("enter two number");
	scanf("%d\n%d",&a,&b);
	swap(&a,&b);
	printf("a=%d b=%d",a,b);
	}

	