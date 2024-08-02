#include<stdio.h>

void merge(int a[], int l, int r, int m){
    int i, j, p, k, temp, b[20];
    i = l;
    j = l;
    k = m + 1;
    while (j <= m && k <= r) { 
        if (a[j] < a[k]) { 
            b[i++] = a[j++];
        } else {
            b[i++] = a[k++];
        }
    }
    while (j <= m) { 
        b[i++] = a[j++];
    }
    while (k <= r) {
        b[i++] = a[k++];
    }
    for (p = l; p <= r; p++) { 
        a[p] = b[p];
    }
}

void mergesort(int a[], int l, int r){
    int mid;
    if (l < r) {
        mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, r, mid);
    }
}

int main(){
    printf("\n\n.........................Prepared by Sangam Shrestha.......................");
    printf("\n\n -----------------------Merge Sort---------------------");
    int a[] = {3, 1, 5, 2, 6, 8, 4};
    printf("\n\nThe Origional Array is: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", a[i]);
    }
    
    mergesort(a, 0, 6);

    printf("\n\nThe sorted array is: ");
    for (int i = 0; i < 7; i++)
        printf("%d ", a[i]); 

    printf("\n\n\n");
    return 0;
}
