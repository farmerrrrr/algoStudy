#include <iostream>

using namespace std;

int main(){
	
	int n, k, sum = 0, max;
	int tp[100000];
	cin >> n >> k;
	
	for(int i = 0; i < n; i++)
		cin >> tp[i];
		
	for(int i = 0; i < k; i++)
		sum += tp[i];
	
	max = sum;
		
	for(int i = k; i < n; i++){
		sum = sum - tp[i-k] + tp[i];
		if(sum > max)
			max = sum;
	}
	
	cout << max;
	
	return 0;
}
