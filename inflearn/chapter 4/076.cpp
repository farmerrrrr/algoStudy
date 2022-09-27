#include <stdio.h>

int cof[21][21] = {0,};

int binomialCoefficient(int n, int r) {
	if(cof[n][r] > 0)
		return cof[n][r];
	if(n == r || r == 0)
		return 1;
	else
		return cof[n][r] = binomialCoefficient(n-1, r) + binomialCoefficient(n-1, r-1);
}

int main() {
	int n, r;
	scanf("%d %d", &n, &r);
	
	printf("%d", binomialCoefficient(n, r));
	
	return 0;
}
