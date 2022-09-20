#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	int ch[10001] = {0,}, dis[10001] = {0,};
	int a[3] = {1, -1, 5};
	
	int s, e, d;
	scanf("%d %d", &s, &e);
	
	q.push(s);
	dis[s] = 0;
	
	while(!q.empty()) {
		int cur = q.front();
		q.pop();
			
		for(int i = 0; i < 3; i++){
			int pos = cur + a[i];
			if(pos <= 0 || pos > 10000)
				continue;
			
			if(pos == e) {
				printf("%d", dis[cur]+1);
				return 0;
			}
			
			if(dis[pos] == 0) {
				q.push(pos); 
				dis[pos] = dis[cur] + 1;
			}
		}
	}
	
	return 0;
}
