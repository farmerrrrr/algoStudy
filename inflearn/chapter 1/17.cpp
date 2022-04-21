#include <iostream>

using namespace std;

int solution(int x){
	
	int sum = 0;
	
	for(int i = 1; i <= x; i++)
		sum += i;	
	
	return sum;
}

int main(){
	
	int n;
	int num[10], std[10];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> num[i] >> std[i];
	
	for(int i = 0; i < n; i++)
		if(solution(num[i]) == std[i])
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	
	return 0;
}
