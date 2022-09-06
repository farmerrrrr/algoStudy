#include <stdio.h>

int ch[11] = {0, };
int num[11];

bool flag = false;

int dfs(int n, int d) {
	if(d > n) {
		int s1 = 0, s2 = 0;
		for(int i = 1; i <= n; i++) {
			if(ch[i] == 1)
				s1 += num[i];
			else
				s2 += num[i];
		}
		if(s1 == s2)
			flag = true;
	}
	else {
		ch[d] = 1;
		dfs(n, d+1);
	
		ch[d] = 0;
		dfs(n, d+1);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
		scanf("%d", &num[i]);
	
	dfs(n, 1);
	
	if(flag == true)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}
