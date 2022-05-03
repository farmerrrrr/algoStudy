#include <iostream>

using namespace std;

int main(){
	
	int n, m, tmp, idx, cnt = 0, k;
	bool flag = 0;
	int task[1000], b[10] = {0, };
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> task[i];
		
//	b[0] = task[cnt++];

	for(int i = 0; i < m; i++){
		if(task[i] == b[0])
			continue;
			
		// is cache hit?
		for(int j = 1; j < cnt; j++){
			if(task[i] == b[j]){
				flag = 1;
				idx = j;
			}
		}
		
		if(flag == 0 && cnt < n)
			cnt++;
			
		k = idx+1;
		
		while(k > 0){
			b[k] = b[k-1];
			k--;
		}
		
		b[0] = task[i];
		idx = cnt;
		flag = 0;
	}

	for(int i = 0; i < cnt; i++)
		cout << b[i] << " ";
	for(int i = cnt; i < n; i++)
		cout << "0 ";
		
	return 0;
}
