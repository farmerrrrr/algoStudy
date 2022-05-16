#include <iostream>

using namespace std;

int main(){
	
	int n, cnt = 0;
	int a[52][52];
	cin >> n;
	
	for(int i = 0; i <= n+1; i++){
		for(int j = 0; j <= n+1; j++){
			if(i == 0 || j == 0 || i == n+1 || j == n+1){
				a[i][j] = 0;
				continue;
			}
			cin >> a[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			if((a[i][j] <= a[i-1][j]) || (a[i][j] <= a[i+1][j]) || (a[i][j] <= a[i][j-1]) || (a[i][j] <= a[i][j+1]))
				continue;
			else
				cnt++;
	}
	
	cout << cnt;
	
	return 0;
}
