#include <stdio.h>

void recur(int n){
	if(n == 1)
		printf("%d", n);
	else{
		recur(n/2);
		printf("%d", n%2);
	}
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	recur(n);
	
	return 0;
}
