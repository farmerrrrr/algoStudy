#include <stdio.h>

int n, m, count = 0;

int ch[11] = {0, };
int a[11];

int dfs(int d) {
	if(d > n) {
		int sum = 0;
		for(int i = 1; i <= n; i++){
			if(ch[i] == 1) 
				sum += a[i];
			else if(ch[i] == 2) 
				sum -= a[i];
		}
		if(sum == m)
			count++;
	}
	else {
		// excluded
		ch[d] = 0;	
		dfs(d+1);
		
		// addition 
		ch[d] = 1;
		dfs(d+1);
		
		// subtraction
		ch[d] = 2;
		dfs(d+1);
	}
}

int main() {
	
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	
	dfs(1);
	
	if(count == 0)
		printf("-1");
	else
		printf("%d", count);
	
	return 0;
}
