#include <iostream>

using namespace std;

int main(){
	
	int n, tmp, sum = 0;
	int a[10][10];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> tmp;
		for(int j = 0; j < n; j++)
			a[j][i] = tmp;
	}
	
	for(int i = n-1; i >= 0; i--){
		cin >> tmp;
		for(int j = 0; j < n; j++)
			if(a[i][j] > tmp)
				a[i][j] = tmp;
	}

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			sum += a[i][j];
			
	cout << sum;
	
	return 0;
}
