#include <stdio.h>

int n, cnt = 0;
int map[21][21] = {0, }, ch[21] = {0, };

void dfs(int v) {
	if(v == n)
		cnt++;
	else 
		for(int i = 1; i <= n; i++)
			if(map[v][i] == 1 && ch[i] == 0){
				ch[v] = 1;
				dfs(i);
				ch[v] = 0;
			}
}

int main() {
	
	int m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++){
		int y, x;
		scanf("%d %d", &y, &x);
		map[y][x] = 1;
	}
	
	dfs(1);
	
	printf("%d", cnt);
	
	return 0;
}
