#include <stdio.h>
#include <queue>

using namespace std;

int main() {
	priority_queue<int> pq;
	
	while(1) {
		int input;
		scanf("%d", &input);
		
		if(input == -1)
			break;
		else if(input == 0) {
			if(pq.empty())
				printf("-1\n");
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else
			pq.push(input);
	}
	
	return 0;
}
