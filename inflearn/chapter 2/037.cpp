#include <iostream>

using namespace std;

int main(){
	
	int n, m, idx = 0,;
	bool flag = 0;
	int task[1000], b[10] = {0, };
	
	cin >> n >> m;
	for(int i = 0; i < m; i++)
		cin >> task[i];

	for(int i = 0; i < m; i++){
		flag = 0;
	
		// is cache hit?
		for(int j = 0; j < n; j++){
			if(task[i] == b[j]){
				flag = 1;
				idx = j;
			}
		}
		
		if(flag == 0)
			for(int k = n-1; k > 0; k--)
				b[k] = b[k-1];
		else
			for(int k = idx; k > 0; k--)
				b[k] = b[k-1];
				
		b[0] = task[i];	
	}

	for(int i = 0; i < n; i++)
		cout << b[i] << " ";
		
	return 0;
}
