#include <stdio.h>

void dfsPre(int n) {
	if(n > 7)
		return;
	else {
		printf("%d ", n);
		dfsPre(n*2);
		dfsPre(n*2 + 1);
	}
}

void dfsIn(int n) {
	if(n > 7)
		return;
	else {
		dfsIn(n*2);
		printf("%d ", n);
		dfsIn(n*2 + 1);
	}
}

void dfsPost(int n) {
	if(n > 7)
		return;
	else {
		dfsPost(n*2);
		dfsPost(n*2 + 1);
		printf("%d ", n);
	}
}

int main() {
	
	printf("전위순회: ");
	dfsPre(1);
	
	printf("\n중위순회: ");
	dfsIn(1);
	
	printf("\n후위순회: ");
	dfsPost(1);
	
	return 0;
}
