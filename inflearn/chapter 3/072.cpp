#include <stdio.h>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	
	int n, k, i, prince;
	scanf("%d %d", &n, &k);
	
	for(i = 1; i <= n; i++)
		q.push(i);
	
	i = 1;
	while(!q.empty()) {
		prince = q.front();
		q.pop();
		if(i % k != 0)
			q.push(prince);
		i++;
	}
	
	printf("%d", prince);
	
	return 0;
}
