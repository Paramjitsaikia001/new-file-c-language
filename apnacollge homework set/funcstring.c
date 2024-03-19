#include<stdio.h>
int main(){

  /*  normal format cannot printf multipul word so we use 3 function :
    1.gets(str) .str is our input and get is use to take input from user .but it donot use because it is outdated
    2.puts(str) .puts function is use to print the output 
    3.fgets(str,n,file),this is the alternative of gets func. here str is input , n is size of the string , and file if stdin(standard input)*/

    char str[100];//declaration
printf("enter the string: ");
    fgets(str,100,stdin);
    puts(str);
}