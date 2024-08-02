#include <stdio.h>

int main(){
    printf("....................Prepared by Sangam Shrestha....................\n\n");
    printf("----------------Selectiontion Sort-----------------");
    int a[8] = {5, 1, 6, 3, 9, 2, 7, 4}, i, j;

    printf("\n\nThe origional array is : ");
    for(i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }

    printf("\n\nThe sorted array is: ");
    selectionSort(a, i, j);

    return 0;
}
void selectionSort(int a[], int i, int j){
    int temp, min;
    for(i = 0; i < 8-1; i++){
        min = i;
        for(j = i + 1; j < 8; j++){
            if(a[j] < a[min]){
                min=j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
}