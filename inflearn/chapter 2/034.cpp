#include <iostream>

using namespace std;

int main(){
	
	int n, tmp;
	cin >> n;
	
	int a[100];
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i; j++)
			if(a[j] > a[j+1]){
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
	}
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	
	return 0;
}
