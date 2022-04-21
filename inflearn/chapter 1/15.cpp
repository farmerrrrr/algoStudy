#include <iostream>

using namespace std;

int main(){
	
	int arr[200001] = {0,};
	int n, count = 0;
	cin >> n;
	
	// get prime numbers (use Q9's logic) 
	for(int i = 1; i <= n; i++)
		for(int j = 0; j <= n; j=j+i)
			arr[j]++;
	
	// find prime numbers		
	for(int i = 1; i <= n; i++)
		if(arr[i] == 2)
			count++;
		
	cout << count;
	
	return 0;
}
