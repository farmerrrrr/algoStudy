#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int q[10], ch[10] = {0,};
int front = 0, back = 0;
vector<int> map[10];

int main() {
	int a, b;
	for(int i = 0; i < 6; i++){
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	
	q[++back] = 1;
	ch[1] = 1;
	
	while(front < back) {
		int t = q[++front];
		printf("%d ", t);
		for(int i = 0; i < map[t].size(); i++)
			if(ch[map[t][i]] != 1){
				ch[map[t][i]] = 1;
				q[++back] = map[t][i];
			}
	}
	
	return 0;
}

