#include <iostream>

using namespace std;

int stack[10], top = -1;

void push(int n){
	stack[++top] = n;
}

int pop(){
	return stack[top--];
}

int main(){
	
	int n, k;
	cin >> n >> k;

	while(n/k > 0){
		push(n % k);
		n /= k;
	}
	push(n);
	
	while(top >= 0){
		int res = pop();
		if(res >= 10)
			printf("%c", 65+res%10);
		else
			printf("%d", res);
	}
	
	return 0;
}
