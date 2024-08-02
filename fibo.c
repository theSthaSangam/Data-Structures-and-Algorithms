#include <stdio.h>

int fibonacci(int num){
    if(num <= 1){
        return  num;
    } else {
        // return fibonacci(num - 1) + fibonacci(num - 2);
		return num+fibonacci(num-1);
    }
}

int main(){
	printf("...........................Prepared by Sangam Shrestha.....................");
	int num, result, num01;
	printf("\n\nEnter a number up to which Fibonacci is to be printed: ");
	scanf("%d", &num);
	printf("\n\nFibonacci: ");
	result = fibonacci(num);
	printf("%d", result);
	
	return 0;
}

