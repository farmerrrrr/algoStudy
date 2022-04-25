#include <iostream>

using namespace std;

int check(int n, int m){
	
	int cnt = 0;
	
	while(1){
			if(n % m == 0){
				cnt++;
				n /= m;
			}
			else
				break;
		}
	
	return cnt;
}


int main(){
	
	int n, two = 0, five = 0, tmp;
	cin >> n;
	
	for(int i = 2; i <= n; i++){
		tmp = i;
		two += check(tmp, 2);
		five += check(tmp, 5);
	}
	
	cout << min(two, five);
	
	return 0;
}
