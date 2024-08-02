#include <stdio.h>
#include <conio.h>

int i, stack[10];
int top = -1;
void push(int data){
    top++;
    stack[top] = data;
}
void pop(){
    stack[top] = 0;
    top--;
}
void dfs(int graph[6][6]){
    int i, current, visited[] = {0,0,0,0,0,0,0};
    push(0);
    visited[0] = 1;
    while(top != 1){
        current = stack[top];
        printf("%d " , current);
        pop();
        for(int i = 0; i < 6; i++){
            if((graph[current][i] == 1) && (visited[i] = 0)){
                visited[i] = 1;
                push(i);
                
            }
        }
    }
}
int main(){
    printf("\n\n..................By Sangam Shrestha...............\n\n");

    printf("\n...........DFS Graph...........\n\n");

    int graph[6][6] = { {0,0,1,1,0,0},
                        {0,0,1,0,1,0},
                        {1,1,0,0,0,0},
                        {1,0,0,0,1,0},
                        {0,1,0,1,0,1},
                        {0,0,0,0,1,0} };
    dfs(graph);
    printf("\n\n");
    return 0;
}