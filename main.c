#include <stdio.h>

void printNDownR(int n) {
	if(n) {
		printNDownR(n-1);
		printf("%d ",n);
	}
}

void printToN(int i,int n) {
	if(i<=n) {
		printToN(i+1,n);
		printf("%d ",i);
	}
}

int main(void) {
	printNDownR(10);
	printf("\n");
	printToN(1,10);
}
