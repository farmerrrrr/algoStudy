#include <iostream>

using namespace std;

int main(){
	
	int n, tmp, i, j, k, cnt = 0;
	bool flag = false;
	int map[52][52];
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	cin >> n;
	
	for(i = 0; i < n+2; i++){
		for(j = 0; j < n+2; j++){
			if(i == 0 || j == 0|| i == n+1 || j == n+1){
				map[i][j] = 0;
				continue;
			}
			cin >> map[i][j]; 
		}
	}
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++){
			for(k = 0; k < 4; k++)
				if(map[i][j] <= map[i+dy[k]][j+dx[k]])
					break;
			if(k == 4)
				cnt++;		
		}
	
	cout << cnt;
	
	return 0;
}
