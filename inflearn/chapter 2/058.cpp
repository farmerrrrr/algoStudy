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
	
	printf("������ȸ: ");
	dfsPre(1);
	
	printf("\n������ȸ: ");
	dfsIn(1);
	
	printf("\n������ȸ: ");
	dfsPost(1);
	
	return 0;
}
