#include<stdio.h>

int partition(int a[], int l, int r ){
    int i, j, p, k, temp;
    i = l;
    j = r;
    p = a[l];
    while(i < j){
        while (a[i] <= p){
            i++;
        }
        while (a[j] > p){
            j--;
        }
        if(i < j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        a[l] = a[j];
        a[j] = p;
        return j;
    }
}
void quicksort(int a[], int l, int r){
    int p;
    if(l < r){
        p = partition(a, l, r);
        quicksort(a, l, p-1);
        quicksort(a, p+1, r);
    }
}

int main(){
    printf("\n\n.........By Sangam Shrestha............\n\n");
    int i, a[] = {3, 1, 5, 2, 7, 9, 4};
    printf("The origional array is: ");
    for(i = 0; i < 7; i++){
        printf("%d ", a[i]);
    }

    quicksort(a, 0, 6);
    printf("\n\nThe sorted array is: ");
    for(i = 0; i < 7; i++){
        printf(" %d ", a[i]);
    }
    printf("\n\n");
}
