#include <stdio.h>
#include <stdlib.h>

int fact(int num);
int fibonacci(int fibo);

int main(){
    printf("\n\n.............Prepared by Sangam Shrestha............");
    int num, fibo;
    printf("\n\nEnter a number for factorial: ");
    scanf("%d", &num);
    long a = fact(num);
    printf("Factorial is %d\n", a);
    
    // printf("Enter a number up to which Fibonacci is to be printed: ");
    // scanf("%d", &fibo);
    // long long b = fibonacci(fibo);
    // printf("Fibonacci is %d\n", b);
    printf("\n\n");
    return 0;
}

int fact(int num){
    if(num == 0){
        return 1;
    } else {
        return (num * fact(num - 1));
    }
}

// int fibonacci(int fibo){
//     if(fibo <= 1){
//         return fibo;
//     } else {
//         return fibonacci(fibo - 1) + fibonacci(fibo - 2);
// 		// return fibo+fibonacci(fibo-1);
//     }
// }

