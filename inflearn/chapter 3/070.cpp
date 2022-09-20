#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

vector<int> map[21];
int ch[21] = {0,};
int dis[21] = {0,};
queue<int> q;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	
	q.push(1);
	ch[1] = 1;
	
	while(!q.empty()) {
		int t = q.front();
		q.pop();
		for(int i = 0; i < map[t].size(); i++) 
			if(ch[map[t][i]] != 1) {
				ch[map[t][i]] = 1;
				q.push(map[t][i]);
				dis[map[t][i]] = dis[t] + 1;
			}
	}
	
	for(int i = 2; i <= n; i++)
		printf("%d : %d\n", i, dis[i]);
	
	return 0;
}

