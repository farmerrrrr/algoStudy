#include <stdio.h>

int main() {
	
	int map[21][21] = {0, };
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++){
		int y, x, e;
		scanf("%d %d %d", &y, &x, &e);
		map[y][x] = e;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			printf("%d ", map[i][j]);
		printf("\n");
	}
	
	return 0;
}
