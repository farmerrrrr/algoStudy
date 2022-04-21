#include <iostream>

using namespace std;

int reverse(int x){
	
	int reversed = 0, last, i = 0;
	
	while(x > 0){
		last = x % 10;
		reversed = reversed * 10 + last;
		x /= 10;
		i++;
	}
	
	return reversed;
}

bool isPrime(int x){
	
	bool flag = true;
	
	for(int i = 2; i < x; i++)
		if(x % i == 0)
			flag = false;
			
	if(x == 1) flag = false;  // 1 is not a prime number
	
	return flag;
}

int main(){
	
	int n, m;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> m;
		m = reverse(m);
		if(isPrime(m))
			cout << m << " ";
	}
	
	return 0;
}
