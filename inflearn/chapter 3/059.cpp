#include <stdio.h>

int ch[11] = {0, };

int dfs(int n, int d) {
	if(d > n) {
		for(int i = 1; i <= n; i++)
			if(ch[i] == 1)
				printf("%d ", i);
		printf("\n");
	}
	else {
		ch[d] = 1;
		dfs(n, d+1);
	
		ch[d] = 0;
		dfs(n, d+1);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	
	dfs(n, 1);
	
	return 0;
}
