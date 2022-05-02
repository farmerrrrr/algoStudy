#include <iostream>

using namespace std;

int main(){
	
	int n, a[101], idx, tmp, res[101] = {0,};
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
		
	for(int i = n; i > 0; i--){
		idx = n-i+1;
		res[idx] = i; 
		while(idx-1 > a[i] && idx > 1){
			tmp = res[idx];
			res[idx] = res[idx-1];
			res[idx-1] = tmp;
			idx--;
		}
	}
	
	for(int i = 1; i <= n; i++)
		cout << res[i] << " ";
	
	return 0;
}
