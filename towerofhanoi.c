#include<stdio.h>
#include<stdlib.h>

void towerofhanoi(int n, char from, char to, char aux){
	if(n == 1){
		printf("\n Move disc 1 from disc %c to disc %c..");
		return;
	} else {
		towerofhanoi(n-1,from,aux, to);
		printf("\n Move disc %d from disc %c to %c", n, from, to);
		towerofhanoi(n-1, aux, to, from);
		
	}
} 
int main(){
	printf("\n\n.............Prepared by Sangam Shrestha.............");
	int n;
	printf("\n\n Enter number of discs: ");
	scanf("%d", &n);
	towerofhanoi(n, 'A', 'C', 'B');
	getch();
}
