#include <stdio.h>
#include <vector>

using namespace std;

vector<int> map[21];
int ch[21] = {0,};

int n, cnt = 0;

void dfs(int v) {
	if(v == n)
		cnt++;
	else
		for(int i = 0; i < map[v].size(); i++)
			if(ch[map[v][i]] == 0){
				ch[map[v][i]] = 1;
				dfs(map[v][i]);
				ch[map[v][i]] = 0;
			}
}

int main() {
	
	int m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		map[a].push_back(b); 
	}
	
	ch[1] = 1;
	dfs(1);
	
	printf("%d", cnt);
	
	return 0;
}
