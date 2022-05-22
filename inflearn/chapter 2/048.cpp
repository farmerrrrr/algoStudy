#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int arr[9][9];
	int ave[9];
	int sum, t = 0, min = 214000000;
	
	for(int i = 0; i < 9; i++){
		sum = 0;
		for(int j = 0; j < 9; j++){
			cin >> arr[i][j];
			sum += arr[i][j];
		}
		ave[i] = ((sum % 9) >= 5)? sum/9 + 1 : sum/9; 
	}
	
	for(int i = 0; i < 9; i++){
		t = arr[i][0];
		min = abs(arr[i][0] - ave[i]);
		for(int j = 1; j < 9; j++){
			if(abs(arr[i][j] - ave[i]) < min){
				min = abs(arr[i][j] - ave[i]);
				t = arr[i][j];
			}
			else if(abs(arr[i][j] - ave[i]) == min)
				if(arr[i][j] > t)
					t = arr[i][j];
		}
		cout << ave[i] << " " << t << endl;
	}
	
	return 0;
}
