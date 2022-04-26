#include <iostream>

using namespace std;

int main(){
	
	int n;
	int a[100];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
	
	for(int i = 0; i < n; i++){
		int idx = i;
		for(int j = i+1; j < n; j++)
			if(a[idx] > a[j])
				idx = j;
		int tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	
	return 0;
}
