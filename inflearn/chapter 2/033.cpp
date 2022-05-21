#include <iostream>

using namespace std;

int main(){
	
	int n, idx, tmp, rank = 1;
	int a[100];
	cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	for(int i = 0; i < n; i++){
		idx = i;
		for(int j = i+1; j < n; j++)
			if(a[idx] < a[j])
				idx = j;
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}
	
	for(int i = 1; i < n; i++){
		if(a[i-1] != a[i])
			rank++;
		if(rank == 3){
			cout << a[i];
			break; 
		}
	}
	
	return 0;
}
