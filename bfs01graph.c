#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int queue[100];
int front = -1, rear = -1;
void enqueue(int var){
    if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    queue[rear] = var;
}
void dequeue(){
    front++;
}
void bfs(int graph[6][6]){
    int i, visited[7]={0,0,0,0,0,0,0}, current;
    enqueue(0);
    visited[0] = 1;
    while(front <= rear){
        current = queue[front];
        dequeue();
        printf("%d ", current);
        for(i = 0; i < 6; i++){
            if(graph[current][i] == 1 && visited[i] == 0){
                
                visited[i] = 1;
                enqueue(i);
            }
        }
    }
}
int main(){
    printf("\n\n.............By Sangam Shrestha............\n\n");
    printf("\n\n..........BFS Graph............\n\n");

    int graph[6][6] ={{0,0,1,1,0,0},
                     {0,0,1,0,1,0},
                     {1,1,0,0,0,0},
                     {1,0,0,0,1,0},
                     {1,0,1,0,1,0},
                     {0,0,0,0,1,0}};
    bfs(graph);
    printf("\n\n");
    return 0;
}