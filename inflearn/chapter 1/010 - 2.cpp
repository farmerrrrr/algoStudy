#include <iostream>

using namespace std;

int digit_sum(int x){
	
	int sum = 0;
	while(x > 0){
		 sum += x % 10;
		 x /= 10;
	}
	return sum;
}

int main(){
	
	int n, sum, m, max = -214000000, index = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> m;
		sum = digit_sum(m);
		if(max < sum){
			max = sum;
			index = m;
		}
		else if(max == sum)
			if(index < m)
				index = m;
	}
	
	cout << index;

	return 0;
}
