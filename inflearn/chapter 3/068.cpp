#include <stdio.h>
#include <vector>

using namespace std;

vector<pair<int, int> > map[21];
int ch[21] = {0,};

int n, cost = 2140000000;

void dfs(int v, int sum) {
	if(v == n) {
		if(sum < cost)
			cost = sum;
	}
	else
		for(int i = 0; i < map[v].size(); i++)
			if(ch[map[v][i].first] == 0) {
				ch[map[v][i].first] = 1;
				dfs(map[v][i].first, sum + map[v][i].second); 
				ch[map[v][i].first] = 0;
			}
}

int main() {
	
	int m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back({b, c});
	}
	
	ch[1] = 1;
	dfs(1, 0);
	
	printf("%d", cost);
	
	return 0;
}
