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
//array
void even(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d",a[i]);
		}
	}
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
	//print odd number of a array
	int m;
	printf("enter the size of the array");
	scanf("%d",&m);
	int arr[0];
	int i;
	for(i=0;i<m;i++){
		printf("the valuwe of array when size is %d=",i);
		scanf(" %d  ",&arr[i]);
	}
	even(arr,m);
	


	}

	