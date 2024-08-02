#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int linearSearch(int a[],int val, int size){

    for(int i = 0; i < size; i++)
        if(a[i] == val)
            return i;
            // printf("Element found at %d index", i);
        return -1;
    
}

int main(){
    printf("\n.............By Sangam Shrestha............\n");

    int i, val, a[] = {8, 4, 2, 3, 1, 6, 7}; 
    int size = sizeof(a) / sizeof(a[0]);

    
    printf("Enter the element to search: ");
    scanf("%d", &val);
    int index=linearSearch(a, val, size);
    if(index>=0){
        printf("The entered number is at %d index of array...", index);
    } else {
        printf("Elememt not found...");
    }

    printf("\n\n");
    return 0;
}