#include <stdio.h>
#include <conio.h>

int getMax(int arr[], int n){

    int i, max = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
void countingSort(int arr[], int size, int place){
    int i, output[size + 1];
    int max = (arr[0]/place) % 10;
    for( i = 1; i < size; i++){
        if(((arr[i]/ place) % 10) > max){
            max = arr[i];
        }
    }
    int count[max+1];
    for(i = 0; i < max; ++i){
        count[i] = 0;
    }
    for(i = 0; i< size; i++){
        count[(arr[i] / place) % 10]++;
    }
    for(i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }
    for(i = size-1; i > 0; i--){
        output[count[(arr[i]/place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }
    for(i=0; i<size; i++){
        arr[i] = output[i];
    }
}
void radixSort(int arr[], int size){
    int place, max = getMax(arr, size);
    for(place=1; max/place>0; place*=10){
        countingSort(arr, size, place);
    }
}
int printArray(int arr[], int size){
    int i;
    printf("The sorted array is: ");
    for(i = 0; i < size; ++i){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
int main(){
    printf("\n\n........By Sangam Shrestha.........\n\n");
    int i, arr[] = {21, 45, 36, 11, 8, 3, 22, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The Origional Array is: ");
    for(i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n\n");
    radixSort(arr, n);
    
    printArray(arr, n);
    return 0;
}