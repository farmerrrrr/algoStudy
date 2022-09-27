#include <stdio.h>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

struct schedule {
	int fee;
	int day;
	
	schedule(int f, int d) {
		fee = f;
		day = d;
	}
	
	bool operator < (const schedule &b) const {
		return day > b.day;
	}
};

int main() {
	vector<schedule> s;
	priority_queue<int> pq;
	int n, m, d, index, pos = 1, sum = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &m, &d);
		s.push_back(schedule(m, d));
	}
	
	sort(s.begin(), s.end());
	
	pq.push(s[0].fee);
	index = s[0].day;
	
	while(index > 0) {
		while(s[pos].day >= index) {
			pq.push(s[pos++].fee);
		}
		
		if(!pq.empty()) {
			sum += pq.top();
			pq.pop();
		}
		
		index--;
	}
	
	printf("%d", sum);
	
	return 0;
}
