#include<stdio.h>
#include<conio.h>

void heapify(int a[], int n, int i){
    int largest = i; // Initialize largest as root
    int left = 2*i+1;
    int right = 2*i+2;
    if(left < n && a[left] > a[largest]){
        largest = left;
    }
    if(right < n && a[left] > largest){
        largest = right;
    } 
    if(largest != i){
        swap(&a[i], &a[largest]);
        heapify(a, n, largest);
    }
}
void heapsort(int a[], int n){
    int i;
    for(i = n/2-1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for(i = n-1; i >= 0; i--){
        swap(&a[0], &a[i]);
        heapify(a, i, 0);
    }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int i, arr[] = {5, 3, 16, 28, 11, 9, 3, 33};
    int size = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr, size);
    printf("The sorted arrray is: ");
    for(i = 0; i < size; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}