#include <stdio.h>

int set[1001] = {0,};

int find(int v) {
	if(v == set[v])
		return v;
	else
		return set[v] = find(set[v]);
}

void Union(int a, int b) {
	a = find(a);
	b = find(b);
	if(a != b)
		set[a] = b;
}

int main() {
	int n, m, a, b;
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++)
		set[i] = i;
	
	for(int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	
	scanf("%d %d", &a, &b);
	
	if(find(a) == find(b))
		printf("YES");
	else
		printf("NO");
	
	return 0;
}
