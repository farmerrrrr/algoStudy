#include <iostream>

using namespace std;

int main(){
	
	int n, j;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; i++)
		cin >> a[i];
		
	for(int i = 1; i < n; i++){
		j = i;
		while(j > 0){
			if(a[j-1] > 0 && a[j] < 0){
				int tmp = a[j];
				a[j] = a[j-1];
				a[j-1] = tmp;
			}
			j--;
		}
	}
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	
	return 0;
}
