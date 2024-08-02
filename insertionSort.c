#include <stdio.h>

int main()
{
    printf("\n\n................Prepared by Sangam Shrestha.................");
    printf("\n\n------------------Insertion Sort-----------------");
    int a[8] = {4, 6, 1, 9, 2, 7, 3, 8}, i, j, key;
    printf("\n\nThe origional array is: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\nThe sorted array is: ");

    insertionSort(a, i, j, key);
    printf("\n\n");

    return 0;
}
void insertionSort(int a[], int i, int j, int key)
{
    // int temp;
    // for (i = 1; i < 8; i++){
    //     key = a[i];
    //     j = i - 1;
    //     for (key = i; key > 0 && a[key] < a[key-1]; key--){
    //         temp = a[key];
    //         a[key] = a[key-1];
    //         a[key-1] = temp;
    //     }
    // }
    int temp;
    for (int i = 1; i < 8; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
}
