// #include<stdio.h>
// void swap(int *a,int *b){
// 	int t;
// 	*a=*a ^ *b;
//     *b=*a^*b;
// 	*a=*a^*b;
// }
// int main(){

// int a,b;
// 	printf("a=");
// 	scanf("%d",&a);
//     printf("b=");
// 	scanf("%d",&b);
// 	swap(&a,&b);
// 	printf("after swap : a=%d b=%d",a,b);
// }
#include <stdio.h>

void printeven(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n]; // Declare an array of size 'n'

    // Input values into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printeven(a, n);
    
    return 0;
}
