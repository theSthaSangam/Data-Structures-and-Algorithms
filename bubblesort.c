#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    printf("........................Prepared by Sangam Shrestha..................\n\n\n");
    printf("------------Bubble Sort------------");

    int a[8] = {4, 8, 6, 1, 3, 2, 9, 7}, i, j;

    printf("\n\nThe origional array is: ");
    for(i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }

    printf("\nThe sorted array is: ");
    bubblesort(a, i, j);
    printf("\n\n");
    return 0;
}

void bubblesort(int a[], int i, int j){
    int temp;
    for (i = 0; i < 8 - 1; i++) {
        for (j = 0; j < 8 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap if greater is at the rear position
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
}