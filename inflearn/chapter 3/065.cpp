#include <stdio.h>

int map[8][8] = {0,}, ch[8][8] = {0,};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int cnt = 0;

void dfs(int x, int y) {
	if(x == 7 && y == 7)
		cnt++;
	else {
		for(int i = 0; i < 4; i++){
			int	xx = x+dx[i];
			int	yy = y+dy[i];
			
			if(xx < 1 || yy < 1 || xx > 7 || yy > 7)
				continue;
				
			if(map[yy][xx] == 0 && ch[yy][xx] != 1){
				ch[yy][xx] = 1;
				dfs(xx, yy);
				ch[yy][xx] = 0;
			}
		}
	}
}

int main() {
	
	for(int i = 1; i <= 7; i++)
		for(int j = 1; j <= 7; j++)
			scanf("%d", &map[i][j]);
	
	ch[1][1] = 1;
	dfs(1, 1);
	
	printf("%d", cnt);
	
	return 0;
}
