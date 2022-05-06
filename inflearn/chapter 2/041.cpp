#include <iostream>

using namespace std;

int main(){
	
	int n, num, pos, t, sum, cnt = 0, i;
	cin >> n;
	pos = n/2;
	
	while(pos > 0){
		sum = 0;
		num = 0;
		t = pos;
		while(sum < n){
			sum += t++;
			num++;
		}
		if(sum == n){
			for(i = 0; i < num-1; i++)
				cout << pos+i << " + ";
			cout << pos+i << " = " << n << endl;
			cnt++;
		}
		pos--;
	}
	
	cout << cnt;
	
	return 0;
}
