#include <stdio.h>

int map[21][21] = {0,}, ch[21] = {0,};
int n, min = 2140000000;

void dfs(int v, int sum) {
	if(v == n) {
		if(sum < min)
			min = sum;
	}	
	else 
		for(int i = 1; i <= n; i++)
			if(map[v][i] != 0 && ch[i] == 0) {
				ch[i] = 1;
				dfs(i, sum + map[v][i]);
				ch[i] = 0;
			}
}

int main() {
	
	int m;
	scanf("%d %d", &n, &m);

	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}
	
	ch[1] = 1;
	dfs(1, 0);
	
	printf("%d", min);
	
	return 0;
}
