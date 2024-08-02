#include<stdio.h>
#include<conio.h>

int bianarySearch(int a[], int l, int r, int key){
    int m;
    int flag = 0;
    if(l <= r){
        m = (l+r)/2;
        if(key == a[m]){
            flag = m;
        } else if(key < a[m]){
            return bianarySearch(a, l, m-1, key);
        } else {
            return bianarySearch(a, m+1, r, key);
        }
    } else {
        return flag;
    }
}
int main(){
    printf("\n\n...........By Sangam Shrestha..........\n\n");

    int n, a[] = {2, 5, 6, 9, 11, 15, 20}, key, flag;
    int size = sizeof(a) / sizeof(a[0]);
    printf("The Sorted array is : ");
    for(int i = 0; i < size; i++){
        printf(" %d ", a[i]);
    }

    printf("\n\nEnter the item to search: ");
    scanf("%d", &key);
    flag = bianarySearch(a, 0, size-1, key);
    if(flag != 0){
        printf("\nItem found at position %d\n", flag+1);
    } else {
        printf("\nItem not found\n");
    }
    printf("\n\n");
    return 0;
}