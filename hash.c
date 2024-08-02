#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define size 7
int arr[size];

void insert(int value)
{
    int key = value % size;
    if (arr[key] == -1)
    {
        arr[key] = value;
        printf("%d inserted at arr[%d]", value, key);
    }
    else
    {
        printf("Collision occurred. arr[%d] has already an element: %d", key, arr[key]);
        linearprobe(value);
    }
}
void delete(int value)
{
    int key = value % size;
    if (arr[key] == value)
    {
        arr[key] = -1;
        // printf("%d deleted from arr[%d]", value, key);
    }
    else
    {
        printf("Element %d not found at arr[%d]", value, key);
    }
}

void search(int value)
{
    int key = value % size;
    if (arr[key] == value)
    {
        printf("%d found at arr[%d]", value, key);
    }
    else
    {
        printf("Element %d not found.", value);
    }
}

void print(){
    for(int i=0; i<size; i++){
        printf("att[%d] => %d", i, arr[i]);
    }
    printf("\n");
}

int main()
{
    int i, j, n;
    for(i = 0; i < size; i++){
        arr[i] = -1;
    }
    insert(10);
    insert(4);
    insert(2);
    insert(3);
    insert(17);

    printf("HashTable" );
    print();

    printf("Deleting Value...10");
    del(10);
    printf("After the deletion of hash table..");
    print();

    printf("Deleting value 5...\n");
    del(5);
    printf("After the deletion of hash table\n");
    print();
    printf("Searching Value 4...\n");
    search(4);
    printf("Searching value 10..\n");
    search(10);
    return 0; 
}

void linearprobe(int value){
    int i, key, flag=0;
    while(flag==0){
        key=(value+i)%size;
        if(arr[key]==-1){
            arr[key] = value;
            flag = 1;
        }
        i++;
    }
    flag=0;
}
